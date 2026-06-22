#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> graph(3);
    graph[0].push_back(1);
    graph[0].push_back(2);
    graph[1].push_back(0);
    graph[2].push_back(0);
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << ": ";
        for (int neighbor : graph[i])
        {
            cout << neighbor << " ";
        }
        cout << "
";
    }
    cout << "This program shows a simple adjacency list representing a small graph.";
    return 0;
}
