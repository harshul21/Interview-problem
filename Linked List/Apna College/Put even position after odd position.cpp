#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(node*&head,int val)
{
    node*n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node*&head,int val)
{
    node*n=new node(val);
    node*temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void evenafterodd(node*&head)
{
    node*odd=head;
    node*even=head->next;
    node*evenstart=head->next;
    while(odd->next!= NULL && even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL)
    {
        even->next=NULL;
    }
}
int main()
{
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,6);
    display(head);
    evenafterodd(head);
    display(head); 
}
