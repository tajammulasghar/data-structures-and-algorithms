#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int target = 8;
    int left = 0;
    int right = 4;
    int index = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << index << "
";
    cout << "This program uses binary search on a sorted array to find the target index.";
    return 0;
}
