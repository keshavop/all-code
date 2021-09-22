#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

node*sortedInsert(node*head,int x){
    node*temp=new node(x);
    if (head==NULL)
    {
        return temp;
    }
    if (x<head->data)
    {
        temp->next=head;
        return head;
    }
    node*curr=head;
    while (curr!=NULL && curr->next->data<x)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    print(head);
    sortedInsert(head,25);
    print(head);
    return 0;
}