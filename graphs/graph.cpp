#include "graph.h"
#include <sstream>
#include <stack>
#include <limits>
#include <QInputDialog>
#include <QIntValidator>
#include <QFrame>
#include <QVBoxLayout>
#include <QString>
#include <QPlainTextEdit>
#include <QVector>
#include <QQueue>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <string>
#include <QThread>
#include <QTimer>
#include <cmath>
#include <iomanip>
#include <experimental/random>

using std::pair;
using std::priority_queue;
using std::greater;
using std::stack;


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


std::string graph::dfs_traversal(const std::vector<std::vector<int>>& matrix)
{
    std::string dfs_order;
    std::vector<bool> visited(matrix.size(), false);
    std::stack<int> stack;
    char start_vertex = 'A';

    stack.push(0);  // Assuming the traversal starts from vertex 'A' which corresponds to index 0

    while (!stack.empty()) {
        int vertex = stack.top();
        stack.pop();

        if (!visited[vertex]) {
            visited[vertex] = true;
            dfs_order += (start_vertex + vertex);
            dfs_order += ' ';

            for (int i = matrix.size() - 1; i >= 0; --i) {
                if (matrix[vertex][i] == 1 && !visited[i]) {
                    stack.push(i);
                }
            }
        }
    }

    if (!dfs_order.empty()) {
        dfs_order.pop_back();  // Remove the trailing space
    }

    return dfs_order;
}


std::string graph::bfs_traversal(const std::vector<std::vector<int>>& matrix) {
    std::string bfs_order;
    std::vector<bool> visited(matrix.size(), false);
    std::queue<int> queue;
    char start_vertex = 'A';

    queue.push(0);  // Начинаем обход с вершины 'A', которая соответствует индексу 0
    visited[0] = true;

    while (!queue.empty()) {
        int vertex = queue.front();
        queue.pop();

        bfs_order += (start_vertex + vertex);
        bfs_order += ' ';

        for (int i = 0; i < matrix.size(); ++i) {
            if (matrix[vertex][i] == 1 && !visited[i]) {
                queue.push(i);
                visited[i] = true;
            }
        }
    }

    if (!bfs_order.empty()) {
        bfs_order.pop_back();  // Удаляем последний пробел
    }

    return bfs_order;
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

void graph::draw_graph(const std::vector<std::vector<int>>& matrix)
{
    QGraphicsScene* scene = new QGraphicsScene();

    std::vector<QGraphicsEllipseItem*> vertices;
    int sideLength = 300;
    QPointF center(150, 150);

    char c = 65;

    for (size_t i = 0; i < matrix.size(); ++i)
    {
        double angle = 2 * M_PI * i / matrix.size();
        double x = center.x() + sideLength / 2 * cos(angle);
        double y = center.y() + sideLength / 2 * sin(angle);

        QGraphicsEllipseItem* vertex = new QGraphicsEllipseItem(x, y, 20, 20);
        vertex->setBrush(QBrush(Qt::red));
        scene->addItem(vertex);
        vertices.push_back(vertex);

        QString letter(c);
        ++c;

        QFont font;
        font.setPointSize(16);
        font.setFamily("Arial");
        font.setBold(true);


        QGraphicsTextItem* label = new QGraphicsTextItem(letter);
        label->setPos(x+=10, y+=10);
        label->setFont(font);
        scene->addItem(label);
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
                edge->setPen(QPen(Qt::darkGray, 2));
                scene->addItem(edge);

                QGraphicsLineItem* reverseEdge = new QGraphicsLineItem(vertices[j]->rect().center().x(),
                                                                       vertices[j]->rect().center().y(),
                                                                       vertices[i]->rect().center().x(),
                                                                       vertices[i]->rect().center().y());
                reverseEdge->setPen(QPen(Qt::darkGray, 2));
                scene->addItem(reverseEdge);
            }

    graph::color_vertices(vertices, matrix);

    QGraphicsView* view = new QGraphicsView(scene);
    view->resize(500, 500);
    view->show();
}

void graph::color_vertices(const std::vector<QGraphicsEllipseItem*>& vertices, const std::vector<std::vector<int>>& matrix)
{
    std::vector<QColor> colors = {Qt::blue, Qt::green, Qt::yellow, Qt::cyan, Qt::magenta};
    std::vector<int> vertexColors(vertices.size(), -1);

    // Алгоритм жадного раскрашивания с дополнительной проверкой на цвета соседей
    for (size_t i = 0; i < vertices.size(); ++i) {
        // Ищем допустимый цвет для вершины
        bool foundColor = false;
        for (size_t colorIndex = 0; colorIndex < colors.size() && !foundColor; ++colorIndex) {
            // Проверяем, что этот цвет не используется у соседних вершин
            bool validColor = true;
            for (size_t j = 0; j < vertices.size(); ++j) {
                if (matrix[i][j] == 1 && vertexColors[j] == colorIndex) {
                    validColor = false;
                    break;
                }
            }

            // Дополнительная проверка: цвет должен отличаться от цвета соседей и противоположной вершины
            if (validColor) {
                // Проверяем, что у всех соседей есть разные цвета
                for (size_t j = 0; j < vertices.size(); ++j) {
                    if (matrix[i][j] == 1) {
                        if (vertexColors[j] != -1 && colorIndex == vertexColors[j]) {
                            validColor = false;
                            break;
                        }
                    }
                }
            }

            // Проверка для противоположной вершины
            if (validColor && i > 0 && vertexColors[(i + vertices.size() / 2) % vertices.size()] != -1 &&
                colorIndex == vertexColors[(i + vertices.size() / 2) % vertices.size()]) {
                validColor = false;
            }

            if (validColor) {
                vertexColors[i] = colorIndex;
                vertices[i]->setBrush(QBrush(colors[colorIndex]));
                foundColor = true;
            }
        }
    }
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

std::vector<Edge> graph::build_minimum_spanning_tree(const std::vector<std::vector<int>>& matrix)
{
    int numVertices = matrix.size();
    std::vector<Edge> mstEdges; // Рёбра минимального остовного дерева
    std::vector<bool> visited(numVertices, false); // Отслеживание посещенных вершин
    std::priority_queue<Edge> edgeQueue; // Очередь приоритетов для ребер

    // Начинаем с произвольной вершины
    visited[0] = true;

    // Добавляем все ребра, исходящие из начальной вершины, в очередь
    for (int i = 1; i < numVertices; ++i) {
        if (matrix[0][i] == 1) {
            edgeQueue.push(Edge(0, i, 1));
        }
    }

    // Пока не обработаны все вершины
    while (mstEdges.size() < numVertices - 1) {
        // Извлекаем ребро с наименьшим весом из очереди
        Edge currentEdge = edgeQueue.top();
        edgeQueue.pop();

        // Проверка, есть ли уже в MST ребро, соединяющее
        // currentEdge.destination с какой-либо другой вершиной
        bool edgeExistsInMST = false;
        for (const auto& edge : mstEdges) {
            if ((edge.source == currentEdge.destination && edge.destination == currentEdge.source) ||
                (edge.source == currentEdge.destination && edge.destination == currentEdge.source)) {
                edgeExistsInMST = true;
                break;
            }
        }

        // Если вершина назначения не посещена И ребро еще не в MST
        if (!visited[currentEdge.destination] && !edgeExistsInMST) {
            // Добавляем ребро в MST
            mstEdges.push_back(currentEdge);
            visited[currentEdge.destination] = true;

            // Добавляем все ребра, исходящие из вершины назначения, в очередь
            for (int i = 0; i < numVertices; ++i) {
                if (matrix[currentEdge.destination][i] == 1 && !visited[i]) {
                    edgeQueue.push(Edge(currentEdge.destination, i, 1));
                }
            }
        }
    }

    return mstEdges;
}

void graph::draw_minimum_spanning_tree(const std::vector<std::vector<int>>& matrix, const std::vector<Edge>& mstEdges)
{
    QGraphicsScene* scene = new QGraphicsScene();

    // Создаем вершины на углах квадрата
    std::vector<QGraphicsEllipseItem*> vertices;
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

    // Рисуем ребра MST красным цветом
    for (const auto& edge : mstEdges) {
        QGraphicsLineItem* mstEdge = new QGraphicsLineItem(vertices[edge.source]->rect().center().x(),
                                                           vertices[edge.source]->rect().center().y(),
                                                           vertices[edge.destination]->rect().center().x(),
                                                           vertices[edge.destination]->rect().center().y());
        mstEdge->setPen(QPen(Qt::red, 3));
        scene->addItem(mstEdge);
    }

    graph::color_vertices(vertices, matrix);

    QGraphicsView* view = new QGraphicsView(scene);
    view->resize(500, 500);
    view->show();
}


vector<vector<int>> graph::findShortestPaths(const vector<vector<int>>& adjacencyMatrix, int startVertex)
{
    int numVertices = adjacencyMatrix.size();
    vector<vector<int>> shortestPaths(numVertices, vector<int>(numVertices, std::numeric_limits<int>::max())); // Инициализация матрицы кратчайших путей

    queue<int> q;
    q.push(startVertex);
    shortestPaths[startVertex][startVertex] = 0;

    while (!q.empty()) {
        int currentVertex = q.front();
        q.pop();

        for (int neighbor = 0; neighbor < numVertices; ++neighbor) {
            if (adjacencyMatrix[currentVertex][neighbor] == 1 && shortestPaths[startVertex][neighbor] == std::numeric_limits<int>::max()) {
                shortestPaths[startVertex][neighbor] = shortestPaths[startVertex][currentVertex] + 1;
                q.push(neighbor);
            }
        }
    }

    return shortestPaths;

}


vector<int> graph::pruferCode(const vector<vector<int>>& adjacencyMatrix)
{
    int n = adjacencyMatrix.size();
    vector<int> degree(n, 0);
    vector<bool> deleted(n, false);

    for (int i = 0; i < n; ++i) {
        degree[i] = 0;
        for (int j = 0; j < n; ++j) {
            degree[i] += adjacencyMatrix[i][j];
        }
    }

    priority_queue<int, vector<int>, greater<int>> leaves;

    for (int i = 0; i < n; ++i) {
        if (degree[i] == 1) {
            leaves.push(i);
        }
    }

    vector<int> prufer(n - 2);

    for (int i = 0; i < n - 2; ++i) {
        int leaf = leaves.top();
        leaves.pop();
        deleted[leaf] = true;

        int neighbor;
        for (int j = 0; j < n; ++j) {
            if (adjacencyMatrix[leaf][j] && !deleted[j]) {
                neighbor = j;
                break;
            }
        }

        prufer[i] = neighbor;

        if (--degree[neighbor] == 1) {
            leaves.push(neighbor);
        }
    }

    return prufer;
}

vector<vector<int>> graph::decodePrufer(const vector<int>& pruferCode)
{
    int n = pruferCode.size() + 2;
    vector<int> degree(n, 1);

    for (int i : pruferCode) {
        degree[i]++;
    }

    int leaf = 0;
    while (degree[leaf] != 1) {
        leaf++;
    }

    int j = *min_element(pruferCode.begin(), pruferCode.end());
    j = (j == 0 ? 1 : 0);

    vector<vector<int>> adjacencyMatrix(n, vector<int>(n, 0));

    for (int i : pruferCode) {
        adjacencyMatrix[i][j] = adjacencyMatrix[j][i] = 1;
        degree[i]--;
        degree[j]--;

        if (degree[i] == 1 && i < leaf) {
            j = i;
        } else {
            j = leaf;
            while (degree[j] != 1) {
                j++;
            }
        }
    }

    adjacencyMatrix[leaf][j] = adjacencyMatrix[j][leaf] = 1;

    return adjacencyMatrix;
}
