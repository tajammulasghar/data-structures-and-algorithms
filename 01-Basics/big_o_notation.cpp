#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    cout << sum << "
";
    cout << "This program adds numbers in a loop to show a simple O(n) example.";
    return 0;
}
