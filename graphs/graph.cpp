#include "graph.h"
#include <sstream>

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
