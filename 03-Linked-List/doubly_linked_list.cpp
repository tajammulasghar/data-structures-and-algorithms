#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

int main()
{
    Node first = {1, nullptr, nullptr};
    Node second = {2, &first, nullptr};
    Node third = {3, &second, nullptr};
    first.next = &second;
    second.next = &third;
    Node *current = &first;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "This program creates a doubly linked list and prints it from the first node.";
    return 0;
}
