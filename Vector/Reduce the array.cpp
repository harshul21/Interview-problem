/*A very good problem
in this we have to repace the smallest integer in the array with 0 and so on
For eg - Array= 10 16 7 14 5 3 12 9
         Index= 0  1  2  3 4 5 6  7
Corresponding Ans
 Array= 4 7 2 6 1 0 5 3
 Index= 0 1 2 3 4 5 6 7
 
 As on index 5 element 3 was the smallest so replace it with ) and so on
*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool mycompare(pair<int,int> p1, pair<int,int> p2)
{
    return p1.first<p2.first;
}
using namespace std;
int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;
    
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),mycompare);
    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
