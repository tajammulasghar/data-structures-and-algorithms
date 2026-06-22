#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int target = 4;
    int left = 0;
    int right = 4;
    int found = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            found = mid;
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
    cout << found << "
";
    cout << "This program finds a target in a sorted array using binary search.";
    return 0;
}
