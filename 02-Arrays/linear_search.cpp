#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int target = 1;
    int found = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            break;
        }
    }
    cout << found << "
";
    cout << "This program finds the first occurrence of the target by checking each array element.";
    return 0;
}
