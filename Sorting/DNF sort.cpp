#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *b=*a;
    *a=temp;
}
void dnfsort(int arr[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(&arr[low],&arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid]==1)
        {
            mid++;
        }
        if(arr[mid]==2)
        {
            swap(&arr[mid],&arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[]={1,0,2,1,0,1,2,1,0};
    dnfsort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
