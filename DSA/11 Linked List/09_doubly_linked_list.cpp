#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next=NULL;
    node*prev=NULL;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void print(node*head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}

int main()
{
    node*head=new node(10);
    node*temp1=new node(20);
    node*temp2=new node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    print(head);
    return 0;
}