// Tree Inorder transversal
// left -> root ->right

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

// void inorder(node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

vector<int> inorderTraversal(TreeNode *root)
{
    stack<TreeNode *> st;
    TreeNode *curr = root;
    vector<int> inorder;
    while (true)
    {
        if (curr != NULL)
        {
            st.push(curr);
            curr = curr->left;
        }
        else
        {
            if (st.empty() == true)
            {
                break;
            }
            curr = st.top();
            st.pop();
            inorder.push_back(curr->val);
            curr = curr->right;
        }
    }
    return inorder;
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->right->left = new TreeNode(40);
    root->right->right = new TreeNode(50);

    vector<int> inorder;
    inorder = inorderTraversal(root);
    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
    }

    return 0;
}