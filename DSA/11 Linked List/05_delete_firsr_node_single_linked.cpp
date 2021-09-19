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

void print(node *head){
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node *deleteNode(node *head){
    if (head == NULL){
        return NULL;
    }
    else{
        node *temp = head->next;
        delete head;
        return temp;
    }
}

int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);

    print(head);
    head = deleteNode(head);
    print(head);
    return 0;
}