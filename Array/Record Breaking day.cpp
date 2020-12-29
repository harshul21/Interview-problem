/*Conditions for the Ques-
Both the below conditons given should be satisfied
1.The number of the visitors on the day is strictly larger than the number of the visitors
on each previous days.
2. Either it is the last day, or the number of visitors on the day is strictly larger tahn the 
number of visitors on the following day.*/


#include<iostream>
#include<algorithm>
#include<climits>
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
    int count=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        
        if(i==n-1)
        {
            if(arr[n-1]>=mx)
            {
                count++;
            }
        }
        else
        {
            if(arr[i]>arr[i+1] && arr[i]>=mx)
            {
                count++;
            }
        }
        mx=max(mx,arr[i]);
    }
    cout<<count;
    return 0;
}
