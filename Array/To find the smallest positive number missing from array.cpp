//in the ques 0 is also included in positive numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    const int N =1e6;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            idx[arr[i]] = true; 
        }
    }
    int ans=-1;
    for(int i=0;i<N;i++)
    {
        if(idx[i]==false)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
