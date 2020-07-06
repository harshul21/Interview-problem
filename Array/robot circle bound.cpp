///https://www.geeksforgeeks.org/check-if-a-given-sequence-of-moves-for-a-robot-is-circular-or-not/
///above is the link for the explanation of the problem
///a very good and imp ques
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define N 0
#define E 1
#define S 2
#define W 3
bool iscircular(char path[])
{
    int x=0, y=0;
    int dir=N;

    for(int i=0;path[i];i++)
    {
        char move=path[i];

        if(move=='R')
        {
            dir = (dir +1)%4;
        }
        else if(move=='L')
        {
            dir = (4+dir-1)%4;
        }

    /// for 'G'
    else
    {

        if(dir == N)
        {
            y++;
        }
        else if(dir == E)
        {
            x++;
        }
        else if(dir == S)
        {
            y--;
        }
        else ///dir == W
        {
            x--;
        }

    }
    }

    return(x==0 && y==0);
}
int main()
{
    char path[]="GLGLGLG";
    if(iscircular(path))
    {
        cout<<"follows the cicle";
    }
    else{
        cout<<"doesn't follow the circle";
    }
    return 0;
}
