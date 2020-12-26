#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "harshul garg";
    // convert into upper case
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    
    //convert intp lower case
    for(int i=0;i<str.lenght();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    
    cout<<str;
}
