#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 2, 5, 1, 3};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << "This program uses selection sort to place the smallest remaining element first.";
    return 0;
}
