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

void removeDuplicate(node*head){
    node*curr=head;
    // if (curr==NULL)
    // {
    //     return;
    // }
    
    while (curr!=NULL && curr->next!=NULL)
    {
        if (curr->data==curr->next->data)
        {
            node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);
    print(head);
    removeDuplicate(head);
    print(head);
    return 0;
}