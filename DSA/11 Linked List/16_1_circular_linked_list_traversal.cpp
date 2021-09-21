#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void print(node*head){
    if (head==NULL)
    {
        return ;
    }
    cout<<head->data<<" ";
    for (node*p=head->next;p!=head;p=p->next)
    {
        cout<<p->data<<" ";
    }
    cout<<endl;
}

int main()
{
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    print(head);
    return 0;
}