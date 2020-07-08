#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node* buildLevelOrder()
{
    queue<node*>q;
    int d;
    cin>>d;
    node *root=new node(d);
    q.push(root);
    int l,r;
    while(!q.empty())
    {
        node* f =q.front();
        q.pop();
        cin>>l>>r;
        if(l!=-1)
        {
            f->left = new node(l);
            q.push(f->left);
        }
        if(r!=-1)
        {
            f->right = new node(r);
            q.push(f->right);
        }
    }
    return root;
}

void bfs(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* f=q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }else{
        cout<<f->data<<" ";
        q.pop();

        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);

        }
        }
    }
    return;
}
void printRightView(node* root, int level,int &maxlevel)
{

    if(root==NULL)
    {
        return;
    }
    if(maxlevel<level)
    {
        ///Have discovered a new level
        cout<<root->data<<" ";
        maxlevel=level;
    }
    ///Right
    ///Left
    printRightView(root->right,level+1,maxlevel);
    printRightView(root->left,level+1,maxlevel);

    return;
}
int main()
{
    node* root = buildLevelOrder();
    //bfs(root);

    int maxlevel = -1;
    printRightView(root,0,maxlevel);

    return 0;
}
