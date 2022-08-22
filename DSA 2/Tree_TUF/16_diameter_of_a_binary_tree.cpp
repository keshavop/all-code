// not working but works on leetcode

// Diameter of a binary tree

// Time -> ()
// Space -> ()

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        val = val;
        left = right = NULL;
    }
};

int height(TreeNode *root, int diameter)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left, diameter);
    int rh = height(root->right, diameter);
    diameter = max(diameter, lh + rh);

    return 1 + max(lh, rh);
}

int diameterOfBinaryTree(TreeNode *root)
{
    int diameter = 0;
    height(root, diameter);
    return diameter;
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->right->left = new TreeNode(40);
    root->right->right = new TreeNode(50);
    root->right->right->right = new TreeNode(80);

    cout<<diameterOfBinaryTree(root);
    return 0;
}