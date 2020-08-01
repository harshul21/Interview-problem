#include<iostream>
#include<algorithm>
using namespace std;
int partition(int *arr,int s,int e)
{
    ///Inplace algorithm(without using extra array)
    int i = s-1;
    int j = s;

    int pivot =arr[e];

    for(;j<=e-1;)
    {
        if(arr[j]<=pivot)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }
        j=j+1;
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quicksort(int *arr,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}
