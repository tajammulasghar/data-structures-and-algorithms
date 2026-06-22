#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 3, 9, 1, 6};
    int maximum = arr[0];
    int minimum = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }
    cout << maximum << " " << minimum << "
";
    cout << "This program finds the largest and smallest elements by checking every item.";
    return 0;
}
