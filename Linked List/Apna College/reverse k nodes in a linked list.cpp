/*
for k=2
0->5->6->7->9->NULL
5->0->7->6->9->NULL
*/

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(node*&head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node*temp=head;
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
    cout<<"NULL";
    cout<<endl;
}
node* reversek(node*&head,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
    head->next=reversek(nextptr,k);
    }
    return prevptr;

}
int main()
{
    node*head=NULL;
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,9);
    insertAtHead(head,0);
    display(head); 
    int k=2;
    node* newhead = reversek(head,k);
    display(newhead);
    return 0;
}
