#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;
    return i + 1;
}

void quickSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int main()
{
    vector<int> arr = {4, 1, 5, 2, 3};
    quickSort(arr, 0, arr.size() - 1);
    for (int value : arr)
    {
        cout << value << " ";
    }
    cout << "This program sorts values with quick sort using a pivot and partitioning.";
    return 0;
}
