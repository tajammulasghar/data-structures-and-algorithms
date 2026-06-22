#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    cout << sumDigits(12345) << "
";
    cout << "This program adds each digit of a number by calling the function recursively.";
    return 0;
}
