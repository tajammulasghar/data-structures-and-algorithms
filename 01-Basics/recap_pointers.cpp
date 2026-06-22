#include <iostream>
using namespace std;

int main()
{
    int value = 10;
    int *pointer = &value;
    cout << value << " " << *pointer << "
";
    cout << "This program shows how a pointer stores the address of a value and reads it back.";
    return 0;
}
