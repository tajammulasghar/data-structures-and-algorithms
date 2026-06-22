#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 5;
    vector<vector<int>> table(size);
    int values[] = {1, 6, 11, 3};
    for (int v : values)
    {
        int key = v % size;
        table[key].push_back(v);
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Bucket " << i << ": ";
        for (int v : table[i])
        {
            cout << v << " ";
        }
        cout << "
";
    }
    cout << "This program handles collisions by placing values in the same bucket list.";
    return 0;
}
