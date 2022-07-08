// Check for balanced tree

// Time -> ()
// Space -> ()

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int dfsHeight(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = dfsHeight(root->left);
    if (leftHeight = -1)
    {
        return -1;
    }
    int rightHeight = dfsHeight(root->right);
    if (rightHeight = -1)
    {
        return -1;
    }
    if (abs(leftHeight - rightHeight) > 1)
    {
        return -1;
    }
    return max(leftHeight, rightHeight) + 1;
}

bool isBalanced(node *root)
{
    return dfsHeight(root) != -1;
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    root->right->right->right = new node(80);

    cout << isBalanced(root);
    return 0;
}