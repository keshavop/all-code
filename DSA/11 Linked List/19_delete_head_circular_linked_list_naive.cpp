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

node *deleteHead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return (curr->next);
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = head;

    print(head);
    head = deleteHead(head);
    print(head);
    return 0;
}