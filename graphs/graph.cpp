#include "graph.h"
#include <sstream>
#include <QInputDialog>
#include <QIntValidator>
#include <QFrame>
#include <QVBoxLayout>
#include <QString>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <string>
#include <random>
#include <cmath>
#include <iomanip>
#include <experimental/random>

/*
 * Система предлагает пользователю задать граф матрицей смежности (или матрицей инцидентности или списками смежности)
 * и затем показывает пользователю
 * степень каждой вершины,
 * число компонент связности,
 * является ли граф эйлеровым (полуэйлеровым),
 * является ли граф двудольным (полным двудольным)
*/
std::tuple<vector<string>, int, string, string> graph::null_task(const std::string& input)
{
    const auto matrix = graph::parse_string_to_matrix(input);

    vector<string> vertexes;
    for (int i = 0; i < matrix.size(); i++)
    {
        string temp = ("Вершина " + std::to_string(i + 1) + ": " + std::to_string(graph::getDegree(matrix, i)));
        vertexes.push_back(temp);
    }

    int countConnectedComponents = graph::countConnectedComponents(matrix);

    string isEulerian{};
    string isBipartite{};


    // Проверка на эйлеровость
    if (graph::isEulerian(matrix)) {
        isEulerian = "Граф эйлеров";
    } else if (graph::isSemiEulerian(matrix)) {
        isEulerian = "Граф полуэйлеров";
    } else {
        isEulerian = "Граф не эйлеров и не полуэйлеров";
    }

    // Проверка на двудольность
    if (graph::isBipartite(matrix)) {
        isBipartite = "Граф двудольный";
        if (graph::isCompleteBipartite(matrix)) {
            isBipartite = "Граф полный двудольный";
        } else {
            isBipartite = "Граф не полный двудольный";
        }
    } else {
        isBipartite = "Граф не двудольный";
    }

    tuple<vector<string>, int, string, string> ans = {vertexes, countConnectedComponents, isEulerian, isBipartite};

    return ans;
}















vector<vector<int>> graph::parse_string_to_matrix(const std::string& input)
{
    std::vector<std::vector<int>> matrix;
    std::stringstream ss(input);
    std::string line;

    while (std::getline(ss, line)) { // Чтение строки по строке
        std::vector<int> row;
        std::stringstream lineStream(line);
        int num;

        while (lineStream >> num) { // Чтение чисел из строки
            row.push_back(num);
        }

        matrix.push_back(row); // Добавление строки в матрицу
    }

    return matrix;
}

int graph::getDegree(const vector<vector<int>>& adjacencyMatrix, int vertex)
{
    int degree = 0;
    for (int i = 0; i < adjacencyMatrix.size(); ++i) {
        degree += adjacencyMatrix[vertex][i];
    }
    return degree;
}

int graph::countConnectedComponents(const vector<vector<int>>& adjacencyMatrix)
{
    int numComponents = 0;
    vector<Vertex> vertices(adjacencyMatrix.size());
    for (int i = 0; i < vertices.size(); ++i) {
        vertices[i].degree = 0;
        vertices[i].visited = false;
    }
    for (int i = 0; i < adjacencyMatrix.size(); ++i) {
        for (int j = 0; j < adjacencyMatrix.size(); ++j) {
            vertices[i].degree += adjacencyMatrix[i][j];
        }
    }
    for (int i = 0; i < vertices.size(); ++i) {
        if (!vertices[i].visited) {
            ++numComponents;
            queue<int> q;
            q.push(i);
            vertices[i].visited = true;
            while (!q.empty()) {
                int currentVertex = q.front();
                q.pop();
                for (int j = 0; j < adjacencyMatrix.size(); ++j) {
                    if (adjacencyMatrix[currentVertex][j] && !vertices[j].visited) {
                        vertices[j].visited = true;
                        q.push(j);
                    }
                }
            }
        }
    }
    return numComponents;
}

bool graph::isEulerian(const vector<vector<int>>& adjacencyMatrix)
{
    int oddDegreeCount = 0;
    for (int i = 0; i < adjacencyMatrix.size(); ++i) {
        if (getDegree(adjacencyMatrix, i) % 2 != 0) {
            ++oddDegreeCount;
        }
    }
    return oddDegreeCount == 0;
}

bool graph::isSemiEulerian(const vector<vector<int>>& adjacencyMatrix)
{
    int oddDegreeCount = 0;
    for (int i = 0; i < adjacencyMatrix.size(); ++i) {
        if (getDegree(adjacencyMatrix, i) % 2 != 0) {
            ++oddDegreeCount;
        }
    }
    return oddDegreeCount == 2;
}

bool graph::isBipartite(const vector<vector<int>>& adjacencyMatrix)
{
    int numVertices = adjacencyMatrix.size();
    vector<int> colors(numVertices, -1); // -1 - цвет не назначен
    colors[0] = 0; // Назначаем цвет первой вершине
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();
        for (int i = 0; i < numVertices; ++i) {
            if (adjacencyMatrix[currentVertex][i] && colors[i] == -1) {
                colors[i] = 1 - colors[currentVertex]; // Назначаем противоположный цвет
                q.push(i);
            } else if (adjacencyMatrix[currentVertex][i] && colors[i] == colors[currentVertex]) {
                return false; // Граф не двудольный
            }
        }
    }
    return true; // Граф двудольный
}

bool graph::isCompleteBipartite(const vector<vector<int>>& adjacencyMatrix)
{
    if (!isBipartite(adjacencyMatrix)) {
        return false; // Граф не двудольный
    }
    int numVertices = adjacencyMatrix.size();
    int leftPartSize = 0;
    int rightPartSize = 0;
    for (int i = 0; i < numVertices; ++i) {
        if (getDegree(adjacencyMatrix, i) == numVertices - 1) {
            return false; // Не все вершины соединены
        } else if (getDegree(adjacencyMatrix, i) > 0) {
            ++leftPartSize;
        } else {
            ++rightPartSize;
        }
    }
    for (int i = 0; i < numVertices; ++i) {
        if (getDegree(adjacencyMatrix, i) > 0) {
            if (getDegree(adjacencyMatrix, i) != rightPartSize) {
                return false; // Не все вершины левой части соединены с правой
            }
        } else {
            if (getDegree(adjacencyMatrix, i) != leftPartSize) {
                return false; // Не все вершины правой части соединены с левой
            }
        }
    }
    return true; // Граф полный двудольный
}

void graph::draw_graph(const vector<vector<int>>& matrix)
{
    QGraphicsScene* scene = new QGraphicsScene();

    // Создаем вершины на углах квадрата
    vector<QGraphicsEllipseItem*> vertices;
    int sideLength = 300; // Длина стороны квадрата
    QPointF center(150, 150); // Центр квадрата
    for (size_t i = 0; i < matrix.size(); ++i)
    {
        double angle = 2 * M_PI * i / matrix.size(); // Угол для расположения вершин
        double x = center.x() + sideLength / 2 * cos(angle);
        double y = center.y() + sideLength / 2 * sin(angle);

        QGraphicsEllipseItem* vertex = new QGraphicsEllipseItem(x, y, 20, 20);
        vertex->setBrush(QBrush(Qt::red));
        scene->addItem(vertex);
        vertices.push_back(vertex);
    }

    // Создаем рёбра
    for (size_t i = 0; i < matrix.size(); ++i)
        for (size_t j = i + 1; j < matrix[i].size(); ++j)
            if (matrix[i][j] == 1)
            {
                QGraphicsLineItem* edge = new QGraphicsLineItem(vertices[i]->rect().center().x(),
                                                                vertices[i]->rect().center().y(),
                                                                vertices[j]->rect().center().x(),
                                                                vertices[j]->rect().center().y());
                edge->setPen(QPen(Qt::black, 2));
                scene->addItem(edge);

                // Добавляем ребро в обратном направлении, чтобы учесть обоюдное соединение вершин
                QGraphicsLineItem* reverseEdge = new QGraphicsLineItem(vertices[j]->rect().center().x(),
                                                                       vertices[j]->rect().center().y(),
                                                                       vertices[i]->rect().center().x(),
                                                                       vertices[i]->rect().center().y());
                reverseEdge->setPen(QPen(Qt::black, 2));
                scene->addItem(reverseEdge);
            }



    QGraphicsView* view = new QGraphicsView(scene);
    view->resize(500, 500);
    view->show();
}



std::vector<std::vector<int>> graph::generateAdjacencyMatrix()
{
    srand(time(0)); // Инициализация генератора случайных чисел
    int size = rand() % 4 + 2; // Генерируем случайный размер матрицы от 2 до 5
    std::vector<std::vector<int>> matrix(size, std::vector<int>(size, 0)); // Создаем матрицу и заполняем ее нулями

    // Заполняем матрицу случайными значениями 0 и 1
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 2;
        }
    }

    return matrix;
}

string graph::matrix_to_string(const vector<vector<int>>& matrix)
{
    std::stringstream ss;

    // Определение ширины столбцов
    int max_width = 0;
    for (const auto& row : matrix) {
        for (int val : row) {
            max_width = std::max(max_width, static_cast<int>(std::to_string(val).length()));
        }
    }

    // Формирование строки таблицы
    for (const auto& row : matrix) {
        for (int val : row) {
            ss << std::setw(max_width) << val << " ";
        }
        ss << std::endl;
    }

    return ss.str();
}





// Функция кодирования Прюфера
vector<int> graph::prufer_encode(const unordered_map<int, vector<int>>& tree)
{
    int n = tree.size();
    vector<int> code;
    unordered_map<int, int> degree;

    // Инициализируем степени вершин
    for (const auto& [node, neighbors] : tree) {
        degree[node] = neighbors.size();
    }

    while (code.size() < n - 2) {
        // Находим вершину с наименьшей степенью, которая не является корнем
        int min_degree = n;
        int min_node = -1;
        for (const auto& [node, deg] : degree) {
            if (deg == 1 && node != 0) {  // 0 - предположительное корневое значение
                min_degree = deg;
                min_node = node;
                break;
            }
        }

        // Удаляем вершину с наименьшей степенью
        int neighbor = tree.at(min_node)[0];
        degree[min_node]--;
        degree[neighbor]--;

        // Добавляем в код соседнюю вершину
        code.push_back(neighbor);
    }

    return code;
}

// Функция декодирования Прюфера
// unordered_map<int, vector<int>> graph::prufer_decode(const vector<int>& code, int n)
// {
//     unordered_map<int, vector<int>> tree;
//     unordered_map<int, int> degree;

//     // Инициализируем степени вершин
//     for (int i = 0; i < n; ++i) {
//         degree[i] = 1;
//     }

//     // Увеличиваем степень для всех вершин в коде Прюфера
//     for (int node : code) {
//         degree[node]++;
//     }

//     // Находим корневую вершину
//     int root = 0;
//     for (int i = 0; i < n; ++i) {
//         if (degree[i] == 1) {
//             root = i;
//             break;
//         }
//     }

//     // Восстанавливаем дерево
//     queue<int, vector<int>> q(code);
//     for (int i = 0; i < n - 2; ++i) {
//         int node = q.front();
//         q.pop();

//         // Находим соседнюю вершину с degree == 1
//         for (int j = 0; j < n; ++j) {
//             if (degree[j] == 1 && j != node) {
//                 tree[node].push_back(j);
//                 tree[j].push_back(node);
//                 degree[node]--;
//                 degree[j]--;
//                 break;
//             }
//         }
//     }

//     // Соединяем корень с последними двумя вершинами
//     for (int i = 0; i < n; ++i) {
//         if (degree[i] == 1 && i != root) {
//             tree[root].push_back(i);
//             tree[i].push_back(root);
//             break;
//         }
//     }

//     return tree;
// }


