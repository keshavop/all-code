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

node*reverseList(node*head){
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    node*rest_head=reverseList(head->next);
    node*rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    
    return rest_head;
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
    head=reverseList(head);
    print(head);
    return 0;
}