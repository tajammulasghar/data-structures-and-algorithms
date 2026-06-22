#include <iostream>
using namespace std;

int main()
{
    int arr[] = {7, 4, 9, 2, 6};
    int target = 2;
    int index = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
    cout << index << "
";
    cout << "This program uses linear search to find a target in an unsorted array.";
    return 0;
}
