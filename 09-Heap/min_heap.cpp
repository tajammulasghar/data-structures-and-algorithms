#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> heap;
    heap.push_back(5);
    heap.push_back(3);
    heap.push_back(8);
    heap.push_back(1);
    for (int i = 1; i < heap.size(); i++)
    {
        int index = i;
        while (index > 0)
        {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent])
            {
                int temp = heap[index];
                heap[index] = heap[parent];
                heap[parent] = temp;
                index = parent;
            }
            else
            {
                break;
            }
        }
    }
    for (int value : heap)
    {
        cout << value << " ";
    }
    cout << "This program builds a min heap by moving smaller values up the tree.";
    return 0;
}
