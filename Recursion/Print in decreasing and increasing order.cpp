#include<iostream>
using namespace std;
//decreasing order
void dec(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<endl;
    dec(n-1);
}
//increasing order
void inc(int n)
{
    if(n==0)
    {
        return;
    }
    
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    dec(5);
    inc(5);
    return 0;
}
