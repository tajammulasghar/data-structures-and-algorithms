#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<vector<int>> graph(3);
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(2);
    graph[2].push_back(0);
    vector<bool> visited(3, false);
    queue<int> q;
    visited[0] = true;
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << "This program performs breadth-first search on a small graph.";
    return 0;
}
