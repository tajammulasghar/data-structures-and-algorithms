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

Node *findMin(Node *root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

Node *remove(Node *root, int value)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    if (value < root->data)
    {
        root->left = remove(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = remove(root->right, value);
    }
    else
    {
        if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = remove(root->right, temp->data);
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
    root = remove(root, 2);
    inorder(root);
    cout << "This program deletes a value from a BST and prints the remaining sorted nodes.";
    return 0;
}
