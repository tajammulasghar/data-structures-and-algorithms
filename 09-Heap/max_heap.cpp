#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> heap;
    heap.push_back(2);
    heap.push_back(7);
    heap.push_back(1);
    heap.push_back(5);
    for (int i = 1; i < heap.size(); i++)
    {
        int index = i;
        while (index > 0)
        {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent])
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
    cout << "This program builds a max heap by moving larger values up the tree.";
    return 0;
}
