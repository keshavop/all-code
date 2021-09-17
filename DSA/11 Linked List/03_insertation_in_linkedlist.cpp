#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *head){
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node*insertBegin(node*head,int d){
    node*temp=new node(d);
    temp->next=head;
    return temp;
}

int main(){
    node*head=NULL;
    head=insertBegin(head,30);
    head=insertBegin(head,20);
    head=insertBegin(head,10);
    head=insertBegin(head,5);

    print(head);
    return 0;
}