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

void deleteNode(node*ptr){
    node*temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
}

int main()
{
    node *head=new node(10);
	head->next=new node(20);
	node *ptr=new node(30);
	head->next->next=ptr;
	head->next->next->next=new node(40);
	head->next->next->next->next=new node(25);
	print(head);
	deleteNode(ptr);
	print(head);
    return 0;
}