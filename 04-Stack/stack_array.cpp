#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;
    stack[++top] = 1;
    stack[++top] = 2;
    stack[++top] = 3;
    while (top >= 0)
    {
        cout << stack[top--] << " ";
    }
    cout << "This program uses an array as a stack and pops values in reverse order.";
    return 0;
}
