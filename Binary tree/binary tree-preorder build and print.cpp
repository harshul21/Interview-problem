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
int print(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
    return 0;
}
int main()
{
    node* root = buildTree();
    print(root);

}
