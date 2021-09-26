#include <iostream>
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

void print(node *head){
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool isLoop(node *head){
    node*slow=head;
    node*fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

int main(){
    node *head = new node(15);
    head->next = new node(10);
    head->next->next = new node(12);
    head->next->next->next = new node(20);
    head->next->next->next->next = head->next;
    if (isLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}