#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "harshul garg";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str;
}
