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
void print(node* head)
{
    node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void buildList(node*&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertAtTail(head,data);
        cin>>data;
    }
}
node* midPoint(node*head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    node*slow = head;
    node*fast = head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;
}
istream& operator >> (istream &is,node*&head)
{
    buildList(head);
    return is;
}
ostream& operator << (ostream &os,node*&head)
{
    print(head);
    return os;
}
node* merge(node*a,node*b)
{
    if(a==NULL)
    {
        return b;
    }
    else if(b==NULL)
    {
        return a;
    }
    node* c;

    ///Compare a and b for smaller element
    if(a->data < b->data)
    {
        c=a;
        c->next = merge(a->next,b);
    }
    else
    {
        c=b;
        c->next = merge(a,b->next);
    }
    return c;
}
node* mergesort(node*head)
{
    ///Base Case
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ///Rec Case
    ///1.Mid point
    node*mid = midPoint(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    ///2.Recursively Sort
    a = mergesort(a);
    b = mergesort(b);

    ///3. Merge a and b
    node*c=merge(a,b);
    return c;
}
int main()
{
    node* head=NULL;
    cin>>head;
    cout<<head<<endl;
    head=mergesort(head);
    cout<<head;
    return 0;
}
