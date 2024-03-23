#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int V;                       // Number of Vertices
    vector<vector<int>> adjList; // Adjacency  List

public:
    // constructor
    Graph(int vertices) : V(vertices)
    {
        adjList.resize(V);
    }

    // function  to add the edges between two vertices
    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph;
    }
    // function to print the graph
    void printGraph()
    {
        for (int i = 0; i < V; ++i)
        {
            cout << "Adjacency list of vertex " << i << ":\n";
            cout << "Head";
            for (int j : adjList[i])
            {
                cout << " -> " << j;
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();

    return 0;
}