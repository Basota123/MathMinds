#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <vector>
#include <queue>
#include <tuple>

using std::tuple;
using std::vector;
using std::string;
using std::queue;

class graph
{
public:
    static std::tuple<vector<string>, int, string, string> null_task(const std::string&);



    static std::vector<std::vector<int>> parse_string_to_matrix(const std::string&);

    // Функция для определения степени вершины в графе
    static int getDegree(const vector<vector<int>>& adjacencyMatrix, int vertex);

    // Функция для поиска количества компонент связности в графе
    static int countConnectedComponents(const vector<vector<int>>& adjacencyMatrix);

    // Функция для проверки, является ли граф эйлеровым
    static bool isEulerian(const vector<vector<int>>& adjacencyMatrix);

    // Функция для проверки, является ли граф полуэйлеровым
    static bool isSemiEulerian(const vector<vector<int>>& adjacencyMatrix);

    // Функция для проверки, является ли граф двудольным
    static bool isBipartite(const vector<vector<int>>& adjacencyMatrix);

    // Функция для проверки, является ли граф полным двудольным
    static bool isCompleteBipartite(const vector<vector<int>>& adjacencyMatrix);



    // Функция для рисования графа
    static void draw_graph(const vector<vector<int>>& matrix);

};


struct Vertex
{
    int degree;
    bool visited;

    friend class graph;
};


#endif // GRAPH_H
