#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s = "()[]{}";
    vector<char> stack;
    bool valid = true;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            stack.push_back(c);
        }
        else
        {
            if (stack.empty())
            {
                valid = false;
                break;
            }
            char top = stack.back();
            stack.pop_back();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{'))
            {
                valid = false;
                break;
            }
        }
    }
    if (!stack.empty())
    {
        valid = false;
    }
    cout << valid << "
";
    cout << "This program checks if the parentheses, brackets, and braces are balanced.";
    return 0;
}
