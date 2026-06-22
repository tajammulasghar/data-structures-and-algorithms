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
    third.next = &first;
    Node *current = &first;
    for (int i = 0; i < 6; i++)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << "This program builds a circular linked list and prints two cycles of the nodes.";
    return 0;
}
