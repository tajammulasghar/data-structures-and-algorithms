#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {3, 1, 4, 2, 5};
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << "This program inserts each value into the sorted portion of the array.";
    return 0;
}
