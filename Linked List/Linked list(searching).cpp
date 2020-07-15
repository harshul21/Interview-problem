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
bool searchRecursive(node*&head,int key)
{
    if(head==NULL)
    {
        return false;
    }
    ///Rec Case
    if(head->data==key)
    {
        return true;
    }
    else
    {
        return searchRecursive(head->next,key);
    }
}
bool searchIterative(node*head,int key)
{
    while(head!=NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        head=head->next;
    }
    return false;
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
    ///below are the two ways given to search the element
    ///any way can be used
    if(searchRecursive(head,4))
    {
        cout<<"element is present";
    }
    else
    {
        cout<<"element is not present";
    }
    cout<<endl;
    if(searchIterative(head,14))
    {
        cout<<"element is present";
    }
    else
    {
        cout<<"element is not present";
    }

    return 0;
}
