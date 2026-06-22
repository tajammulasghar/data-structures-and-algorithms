#include <iostream>
#include <queue>
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
    queue<Node*> q;
    q.push(&root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        cout << node->data << " ";
        if (node->left != nullptr)
        {
            q.push(node->left);
        }
        if (node->right != nullptr)
        {
            q.push(node->right);
        }
    }
    cout << "This program prints tree nodes level by level using a queue.";
    return 0;
}
