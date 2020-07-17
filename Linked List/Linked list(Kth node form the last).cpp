
#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

    ///Constructor
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
///Passing the pointer variable by reference
void insertAtHead(node*&head,int data)
{
    node*n = new node(data);
    n->next = head;
    head = n;
}
int length(node*head)
{
    int len=0;
    while(head!=NULL)
    {
        head=head->next;
        len++;
    }
    return len;
}
void insertAtTail(node*&head,int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next = new node(data);
    return;
}
void insertAtMiddle(node*&head,int data,int p)
{
    if(head==NULL||p==0)
    {
        insertAtHead(head,data);
    }
    else if(p>length(head))
    {
        insertAtTail(head,data);
    }
    else
    {
        ///Insert in the middle
        ///take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1)
        {
            temp=temp->next;
            jump++;
        }
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;

    }
}

node* Kthnodefromlast(node*head,int k)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    node*slow = head;
    node*fast = head;
    int n=1;
    while(n!=k)
    {
        fast=fast->next;
        n++;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
void print(node* head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertAtMiddle(head,2,3);
    print(head);
    cout<<endl;
    node*m=Kthnodefromlast(head,2);
    cout<<m->data;
    return 0;
}
