#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int value = 5;
    cout << factorial(value) << "
";
    cout << "This program computes factorial with a function that calls itself.";
    return 0;
}
