#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int main()
{
    Node root = {1, nullptr, nullptr};
    Node left = {2, nullptr, nullptr};
    Node right = {3, nullptr, nullptr};
    root.left = &left;
    root.right = &right;
    cout << root.data << " ";
    cout << root.left->data << " ";
    cout << root.right->data << "
";
    cout << "This program builds a simple binary tree and prints its root and children.";
    return 0;
}
