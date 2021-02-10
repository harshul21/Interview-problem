//Floyd Cycle(or detect a cycle)
//using slow and fast pointer
//slow pointer takes 1 step and fast pointer takes 2 step
//if they meet each other than cycle exist
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(node*&head,int val)
{
    node* n = new node(val);
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
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
void makecycle(node*&head, int pos)
{
    node*temp=head;
    node*startNode;
    int count =1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}
bool detectcycle(node*head)
{
    node*fast=head;
    node*slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
int main() {
    node*head=NULL;
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,9);
    insertAtHead(head,0);
    makecycle(head,3);
    cout<<detectcycle(head)<<endl;

    //display(head); 
}
