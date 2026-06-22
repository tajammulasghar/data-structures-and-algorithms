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
    Node third = {4, nullptr};
    first.next = &second;
    second.next = &third;
    Node inserted = {3, nullptr};
    inserted.next = second.next;
    second.next = &inserted;
    second.next = inserted.next;
    Node *current = &first;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "This program inserts a node and then deletes it from the linked list.";
    return 0;
}
