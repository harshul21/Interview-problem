#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int currsum=0;
    int j=0,i=0,st=-1,en=-1;
    while(j<n && currsum+arr[j]<=s)
    {
        currsum+=arr[j];
        j++;
    }
    if(currsum==s)
    {
        cout<< i+1<<endl;
        cout<< j;
    }
    while(j<n)
    {
        currsum+=arr[j];
        while(currsum>s)
        {
            currsum-=arr[i];
            i++;
        }
        if(currsum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}
