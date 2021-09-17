#include <bits/stdc++.h>
using namespace std;

// struct node
// {
//     int data;
//     node *next;
//     node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// void print(node *head)
// {
//     node *curr = head;
//     while (curr != NULL)
//     {
//         cout << (curr->data) << " ";
//         curr = curr->next;
//     }
// }

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
}

int main()
{
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    print(head);
    return 0;
}