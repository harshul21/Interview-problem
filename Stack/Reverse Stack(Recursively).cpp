#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int x)
{
    ///Base Case
    if(s.empty())
    {
        s.push(x);
        return;
    }
    ///rec case
    int data = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(data);
}
void reverseStack(stack<int> &s)
{
    ///base case
    if(s.empty())
    {
        return;
    }
    ///otherwise
    ///pop out the top element and insert it at the bottom of
    ///'reversed smaller stack'
    int x = s.top();
    s.pop();
    ///rec reverse the smaller stack
    reverseStack(s);
    insertAtBottom(s,x);
}
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

