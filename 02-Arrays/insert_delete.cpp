#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int n = 5;
    int insertValue = 9;
    int insertIndex = 2;
    for (int i = n; i > insertIndex; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[insertIndex] = insertValue;
    n = n + 1;
    for (int i = insertIndex; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n = n - 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "This program inserts and deletes a value by shifting elements in the array.";
    return 0;
}
