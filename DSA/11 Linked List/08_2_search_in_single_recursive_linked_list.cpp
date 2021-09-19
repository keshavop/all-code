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

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int search(node*head,int x){
    int res=0;
    if (head==NULL)
    {
        return -1;
    }
    if (head->data==x)
    {
        return 1;
    }
    else{
        res=search(head->next,x);
    }
    if (res==-1)
    {
        return -1;
    }
    else
    {
        return (res+1);
    }
    
}

int main()
{
    int x=11;
    node*head=new node(10);
    head->next=new node(11);
    head->next->next=new node(12);
    head->next->next->next=new node(13);
    print(head);
    cout<<search(head,x);
    return 0;
}