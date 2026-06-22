#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 3, 4, 1, 2};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << "This program sorts the array using bubble sort by swapping neighbors.";
    return 0;
}
