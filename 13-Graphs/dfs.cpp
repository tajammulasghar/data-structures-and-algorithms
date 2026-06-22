#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[node] = true;
    cout << node << " ";
    for (int neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, graph, visited);
        }
    }
}

int main()
{
    vector<vector<int>> graph(3);
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(2);
    graph[2].push_back(0);
    vector<bool> visited(3, false);
    dfs(0, graph, visited);
    cout << "This program performs depth-first search on a small graph.";
    return 0;
}
