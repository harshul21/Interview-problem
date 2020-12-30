/*Find the pair in the array which will give the required sum*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int st=0,en=n-1;
    while(st<n && en>=0)
    {
    if(arr[st]+arr[en]>sum)
    {
        en--;
    }
    if(arr[st]+arr[en]<sum)
    {
        st++;
    }
    if(arr[st]+arr[en]==sum)
    {
        cout<<st<<" "<<en;
        break;
    }
    }
    return 0;
}
