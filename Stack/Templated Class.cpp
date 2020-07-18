#include<iostream>
#include<vector>
using namespace std;

///Implementation Of Stack Data Structure using vector
template<typename T>
///template<typename T,typrname U>
class Stack
{
private:
    vector<T> v;
    ///vector<U> v2
public:
    void push(T data)
    {
        v.push_back(data);
    }
    bool empty()
    {
        return v.size()==0;
    }
    void pop()
    {
        if(!empty())
        {
            v.pop_back();
        }
    }
    T top()
    {
        return v[v.size()-1];
    }
};
int main()
{
    ///Stack of integers
    /*Stack<int> s;
    for(int i=1;i<=5;i++)
    {
        s.push(i*i);
    }
    ///Try to print he content of the stack by popping each element
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }*/
    ///Stack of characters
    Stack<char> s;
    for(int i=65;i<=70;i++)
    {
        s.push(i);
    }
    ///Try to print he content of the stack by popping each element
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    ///Stack of multiple data types
    ///Stack<char,int> s;
    return 0;
}
