#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,6,7};
    int n=sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    ///Erase an element
    ///auto it = s.find(2);
    ///s.erase(it);


    ///Printing the elements of set
    for(set<int>::iterator it = s.begin(); it!=s.end();it++)
    {
        cout<<*(it)<<",";
    }
    return 0;
}
