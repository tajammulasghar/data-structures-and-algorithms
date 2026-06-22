#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

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

void preorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node *node)
{
    if (node == nullptr)
    {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

int main()
{
    Node root = {1, nullptr, nullptr};
    Node left = {2, nullptr, nullptr};
    Node right = {3, nullptr, nullptr};
    root.left = &left;
    root.right = &right;
    inorder(&root);
    cout << "
";
    preorder(&root);
    cout << "
";
    postorder(&root);
    cout << "This program prints inorder, preorder, and postorder traversals of a simple tree.";
    return 0;
}
