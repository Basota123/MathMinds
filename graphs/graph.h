#ifndef GRAPH_H
#define GRAPH_H

#include "qgraphicsscene.h"
#include <string>
#include <vector>
#include <queue>
#include <tuple>
#include <unordered_map>
#include <QGraphicsEllipseItem>


using std::tuple;
using std::vector;
using std::string;
using std::queue;
using std::unordered_map;


struct Edge;
struct _Vertex;


class graph
{

public:
    static std::tuple<vector<string>, int, string, string> null_task(const std::string&);

    static std::vector<std::vector<int>> parse_string_to_matrix(const std::string&);

    // Метод для обхода DFS
    static std::string dfs_traversal(const std::vector<std::vector<int>>& matrix);
    // Метод для обхода BFS
    static std::string bfs_traversal(const std::vector<std::vector<int>>& matrix);


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

    // Функция для покраски графа
    static void color_vertices(const std::vector<QGraphicsEllipseItem*>& vertices, const std::vector<std::vector<int>>& matrix);

    // Функция кодирования Прюфера
    static vector<int> pruferCode(const vector<vector<int>>& adjacencyMatrix);

    // Функция декодирования Прюфера
    static vector<vector<int>> decodePrufer(const vector<int>& pruferCode);

    // Функция генерации случайной матрицы смежности
    static std::vector<std::vector<int>> generateAdjacencyMatrix();

    // Функции для построения минимального остовного дерева (алгоритм Прима)
    // Задача 7
    static std::vector<Edge> build_minimum_spanning_tree(const std::vector<std::vector<int>>& matrix);
    static void draw_minimum_spanning_tree(const std::vector<std::vector<int>>& matrix, const std::vector<Edge>& mstEdges);


    // Задача 8
    // Алгоритм поиска кратчайших путей от заданной вершины
    static vector<vector<int>> findShortestPaths(const vector<vector<int>>& adjacencyMatrix, int startVertex);


    static string matrix_to_string(const vector<vector<int>>& matrix);


};


struct _Vertex {
    int id;
    QGraphicsEllipseItem* item;
};


struct Vertex
{
    int degree;
    bool visited;

    friend class graph;
};

struct Edge
{
    int source;
    int destination;
    int weight;

    Edge(int src, int dest, int w) : source(src), destination(dest), weight(w) {}

    // Сортировка ребер по весу
    bool operator<(const Edge& other) const { return weight > other.weight; }// Сортировка по убыванию веса

    friend class graph;

};


#endif // GRAPH_H
