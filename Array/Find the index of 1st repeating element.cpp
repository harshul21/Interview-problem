#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int  mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    const int N = 1e6;
    int idx[N];
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            mn=min(mn,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if(mn==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<mn+1;
    }
    return 0;
}
