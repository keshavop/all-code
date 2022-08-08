#include <bits/stdc++.h>
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

void printList(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *sortedMerge(node *a, node *b)
{
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    node *head = NULL;
    node *tail = NULL;
    if (a->data <= b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else
    {
        head=tail=b;
        b = b->next;
    }

    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if (a == NULL)
    {
        tail->next = b;
    }
    else
    {
        tail->next = a;
    }
    return head;
}

int main()
{
    node *res = NULL;
    node *a = new node(10);
    a->next = new node(20);
    a->next->next = new node(30);

    node *b = new node(5);
    b->next = new node(35);

    res = sortedMerge(a, b);
    printList(res);
    return 0;
}