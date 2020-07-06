///program to rotate the array to the left
#include<iostream>
using  namespace std;
void rotateh(int arr[],int n)
{
    int temp=arr[0],i;
    for( i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
}
void rotate(int arr[],int n,int r)
{
    for(int i=0;i<r;i++)
    {
        rotateh(arr,n);
    }
}
int main()
{
    int arr[1000];int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r;
    cin>>r;
    rotate(arr,n,r);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
