///Good approach available on geeks for geek
/// for eg when there are two numbers in the arra{a,b}
///sum of the product of all possible subset is
///a+b+ab
///a(1+b) + b+1 -1
///a(1+b)+(1+b)-1
///(a+1)*(b+1)-1
///(1+a)*(1+b) -1
/// same will be for three numbers i.e. (1+a)*(1+b)*(1+c)-1
#include<iostream>
using namespace std;
int sop(int arr[],int n)
{
    int ans=1;
    for(int i=0;i<n;i++)
    {
        ans=ans*(arr[i]+1);
    }
    cout<<ans-1;
}
int main()
{
    int arr[1000],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sop(arr,n);
    return 0;
}
