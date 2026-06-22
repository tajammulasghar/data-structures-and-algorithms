#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int left = 0;
    int right = 4;
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "This program reverses the array in place by swapping elements from the ends.";
    return 0;
}
