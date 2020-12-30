/*Approach-
max subarray sum = Total sum of the array - (- sum of non contributing element)
Sum non contributing element = By reversing the sign of the elements in the array
and than applying kadane's algortithm*/
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n)
{
    int sum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        mx=max(mx,sum);
    }
    return mx;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum = totalsum + kadane(arr,n);
    
    cout<<max(wrapsum,nonwrapsum)<<endl;
    
    return 0;
} 
