#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void print(node*head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

node*deleteNode(node*head){
    
}


int main()
{
    node*head=NULL;
    return 0;
}