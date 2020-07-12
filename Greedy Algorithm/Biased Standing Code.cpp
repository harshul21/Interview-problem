#include<iostream>
#include<cstring>
using namespace std;

int abs(int i,int j)
{
    if(i-j>0)
    {
        return i-j;
    }
    return j-i;
}
int main()
{
    int arr[100000] = {0};
    int t,n;
    cin>>t;

    while(t--)
    {
        memset(arr,0,sizeof arr);
        string name;
        int n,rankh;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>name>>rankh;
            arr[rankh]++;
        }
        ///Greedy Approach - assign the team nearest rank available
        int actual_rank = 1;
        int sum=0;
        for(int i=0;i<=n;i++)
        {
            while(arr[i])
            {
                sum+=abs(actual_rank,i);
                arr[i]--;
                actual_rank++;
            }
        }
        cout<<sum;
    }
    return 0;
}
///Test Case
///1
///7
///noe 1
///joe 2
///hell 2
///foe 1
///eon 5
///lety 7
///dev 7
/// Ans=5
