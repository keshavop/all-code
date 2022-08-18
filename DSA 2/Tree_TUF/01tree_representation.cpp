// Tree Representation CPP

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// struct declaration
// struct Node
// {
//     int data;
//     Node*left;
//     Node*right;
//     Node(int val){
//         data = val;
//         left=right=NULL;
//     }
// };

// class declaration
class Node{
    public:
    int data;
    Node * left;
    Node * right;
    Node(int d){
        data = d;
        left = right = NULL;
    }
};

int main()
{
    struct Node * root = new Node (1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    return 0;
}