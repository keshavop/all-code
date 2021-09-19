#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
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
    cout << endl;
}

int search(node*head,int x){
    int pos=1;
    node*curr=head;
    while (curr!=NULL)
    {
        if(curr->data==x){
            return pos;
        }
        else
        {
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

int main()
{
    int x=11;
    node*head=new node(10);
    head->next=new node(11);
    head->next->next=new node(12);
    head->next->next->next=new node(13);
    print(head);
    cout<<search(head,x);
    return 0;
}