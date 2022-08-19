// Tree Preorder transversal
// root ->left ->right
// print in ascending order

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
    node(int d)
    {
        val = d;
        left = right = NULL;
    }
};

// Recursive func

// void preorder(node*root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// Iterative Approach
vector<int> preorderTraversal(node *root)
{
    vector<int> preorder; // vector to store nodes
    if (root == NULL)     // if null return empty
    {
        return preorder;
    }

    stack<node *> st; // stack to store all nodes
    st.push(root);    // pushed first root node

    while (!st.empty()) // while statck is not empty
    {
        root = st.top();               // top node is top node
        st.pop();                      // pop the top node
        preorder.push_back(root->val); // push root node value
        if (root->right != NULL)       // preorder is Root Left and then Right so, push right then left so, left will be ontop of right node
        {
            st.push(root->right);
        }
        if (root->left != NULL)
        {
            st.push(root->left);
        }
    }
    return preorder; // return the vector
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    vector<int> preOrder;
    preOrder = preorderTraversal(root);

    for (int i = 0; i < preOrder.size(); i++)
    {
        cout << preOrder[i] << " ";
    }

    return 0;
}