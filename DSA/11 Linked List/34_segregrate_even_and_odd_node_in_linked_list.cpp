#include <ioStream>
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

node*segregate(node*head){
    node*eS=NULL;
    node*eE=NULL;
    node*oS=NULL;
    node*oE=NULL;
    for(node*curr=head;curr!=NULL;curr=curr->next){
        int x=curr->data;
        if (x%2==0)
        {
            if (eS==NULL)
            {
                eS=curr;
                eE=eS;
            }
            else{
                eE->next=curr;
                eE=eE->next;
            }
        }
        else{
            if (oS==NULL)
            {
                oS=curr;
                oE=oS;
            }
            else{
                oE->next=curr;
                oE=oE->next;
            }
        }
    }
    if (oS==NULL || eS==NULL)
    {
        return head;
    }
    eE->next=oS;
    oE->next=NULL;
    return eS;
}

int main()
{
	node *head=new node(17);
	head->next=new node(15);
	head->next->next=new node(8);
	head->next->next->next=new node(12);
	head->next->next->next->next=new node(10);
	head->next->next->next->next->next=new node(5);
	head->next->next->next->next->next->next=new node(4);
	print(head);
    head=segregate(head);
	print(head);
    return 0;
}