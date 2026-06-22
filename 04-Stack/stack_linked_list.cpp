#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node first = {1, nullptr};
    Node second = {2, nullptr};
    Node third = {3, nullptr};
    first.next = &second;
    second.next = &third;
    Node *top = &first;
    while (top != nullptr)
    {
        cout << top->data << " ";
        top = top->next;
    }
    cout << "This program represents a stack using linked nodes and shows a simple push order.";
    return 0;
}
