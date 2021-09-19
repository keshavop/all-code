#include <iostream>
using namespace std;

class node
{
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
}

node *deleteEnd(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}
int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    print(head);
    deleteEnd(head);
    print(head);
    return 0;
}

// node *deleteEnd(node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }
//     if (head->next == NULL)
//     {
//         delete head;
//         return NULL;
//     }
//     while (head->next->next != NULL)
//     {
//         head = head->next;
//     }
//     delete head->next;
//     head->next = NULL;
//     return head;
// }