#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int b=n;
    int rev=0;
    int digit;
    if(n<0)
    {
        //i.e the no. is negative
        cout<<"Not palindrome";
        return 0;
    }
    while(n)
    {
        digit=n%10;
        rev=(b*10)+digit;
        n=n/10;
    }
    if(b==rev)
    {
        cout<<"Palindrome";
        return 0;
    }
    cout<<"Not Palindrome";
    return 0;
}
