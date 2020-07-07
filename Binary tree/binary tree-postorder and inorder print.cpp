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
int printIn(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}
///Postorder Traversal
int printPo(node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    printPo(root->left);
    printPo(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root = buildTree();

    printIn(root);
    cout<<endl;
    printPo(root);
    return 0;
}
