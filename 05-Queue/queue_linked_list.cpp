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
    Node *current = &first;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "This program simulates a queue with a linked list and shows the order of removal.";
    return 0;
}
