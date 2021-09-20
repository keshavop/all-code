#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next = NULL;
    node *prev = NULL;
    node(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node*insertENd(node *head, int x)
{
    node *temp = new node(x);
    if (head == NULL)
    {
        return temp;
    }
    node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main()
{
    node*head=NULL;
    head=insertENd(head,10);
    head=insertENd(head,20);
    print(head);
    return 0;
}