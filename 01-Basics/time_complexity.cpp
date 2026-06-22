#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            count = count + 1;
        }
    }
    cout << count << "
";
    cout << "This program counts operations in a double loop to show a simple O(n^2) pattern.";
    return 0;
}
