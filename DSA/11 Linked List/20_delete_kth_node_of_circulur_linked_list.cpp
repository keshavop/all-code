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
    if (head == NULL)
    {
        return;
    }
    node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

node *deleteHead(node *head){
    if(head==NULL)return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    node *temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

node *deletekth(node *head,int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k==1)
    {
        return deleteHead(head);
    }
    node*curr=head;
    for (int i = 0; i < k-2; i++)
    {
        curr=curr->next;
    }
    node*temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;

    print(head);
    head = deletekth(head,3);
    print(head);
    return 0;
}