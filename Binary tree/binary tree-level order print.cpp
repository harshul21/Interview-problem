#include<iostream>
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
node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
///Inorder Traversal
void printIn(node* root)
{
    if(root==NULL)
    {
        return;
    }

    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}
///Postorder Traversal
void printPo(node* root)
{
    if(root==NULL)
    {
        return;
    }

    printPo(root->left);
    printPo(root->right);
    cout<<root->data<<" ";
}
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls =height(root->left);
    int rs=height(root->right);
    return max(ls,rs) + 1;
}
void printkthlevel(node* root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
}
int main()
{
    node* root = buildTree();

    printIn(root);
    cout<<endl;
    printPo(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    printkthlevel(root,3);
    return 0;
}
