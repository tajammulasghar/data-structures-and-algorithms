#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "(()())";
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else if (s[i] == ')')
        {
            count--;
        }
        if (count < 0)
        {
            break;
        }
    }
    bool balanced = (count == 0);
    cout << balanced << "
";
    cout << "This program checks parentheses by counting open and close pairs.";
    return 0;
}
