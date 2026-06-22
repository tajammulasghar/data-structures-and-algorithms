#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 7;
    vector<int> table(size, -1);
    int values[] = {10, 20, 5, 15};
    for (int i = 0; i < 4; i++)
    {
        int key = values[i] % size;
        while (table[key] != -1)
        {
            key = (key + 1) % size;
        }
        table[key] = values[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << table[i] << " ";
    }
    cout << "This program stores values in a hash table with linear probing for collisions.";
    return 0;
}
