#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        Node *node = new Node{value, nullptr, nullptr};
        return node;
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

bool search(Node *root, int value)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == value)
    {
        return true;
    }
    if (value < root->data)
    {
        return search(root->left, value);
    }
    return search(root->right, value);
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    bool found = search(root, 6);
    cout << found << "
";
    cout << "This program searches for a value in a BST by checking left or right branches.";
    return 0;
}
