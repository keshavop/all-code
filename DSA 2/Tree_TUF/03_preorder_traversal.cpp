// Tree Preorder transversal
// root ->left ->right
// print in ascending order

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        data = val;
        left =right = NULL;
    }
};

void preorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    preorder(root);
    return 0;
}