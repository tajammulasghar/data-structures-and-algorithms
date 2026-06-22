#include <iostream>
using namespace std;

int main()
{
    int number = 121;
    int original = number;
    int reversed = 0;
    while (number > 0)
    {
        reversed = reversed * 10 + (number % 10);
        number = number / 10;
    }
    bool isPalindrome = (original == reversed);
    cout << isPalindrome << "
";
    cout << "This program checks whether a number reads the same backward and forward.";
    return 0;
}
