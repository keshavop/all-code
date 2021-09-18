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

node *insertEnd(node *head, int d){
    node *temp = new node(d);
    if (head == NULL)
        return temp;

    node *curr = head;
    while (curr->next != NULL)
    {
        curr=curr->next;
    }
    curr->next = temp;
}

void print(node *head){
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    print(head);
    return 0;
}