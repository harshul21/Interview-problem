#include<iostream>
using namespace std;
//logic-
//If AND of n & n-1 is zero then it will
//be a power of 2
bool ispowerof2(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    cout<<ispowerof2(16)<<endl;
    return 0;
}
