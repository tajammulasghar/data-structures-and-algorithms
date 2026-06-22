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

void inorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 3);
    inorder(root);
    cout << "This program inserts values into a BST and prints them in sorted order.";
    return 0;
}
