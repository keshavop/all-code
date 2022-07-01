// Tree Postorder transversal
// left ->right ->root

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

void postorder(node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);

    postorder(root);
    return 0;
}