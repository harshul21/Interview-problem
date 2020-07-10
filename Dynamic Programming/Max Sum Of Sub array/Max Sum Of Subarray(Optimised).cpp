///Space optimized Code
///Also called as Kadane's Algorithm
#include<iostream>
using namespace std;
int maxSumSpaceOpt(int a[],int n)
{
    int current_sum =0;
    int max_so_far =0;
    for(int i=0;i<n;i++)
    {
        current_sum += a[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        max_so_far = max(current_sum,max_so_far);
    }
    return  max_so_far;
}
int main()
{
    int arr[]={-3,2,5,-1,6,3,-2,7,-5,2};
    int n= sizeof(arr)/sizeof(int);
    cout<<maxSumSpaceOpt(arr,n)<<endl;
    return 0;
}

