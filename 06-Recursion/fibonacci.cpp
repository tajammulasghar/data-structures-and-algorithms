#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(5) << "
";
    cout << "This program computes a Fibonacci number using a recursive definition.";
    return 0;
}
