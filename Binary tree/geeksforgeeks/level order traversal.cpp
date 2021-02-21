vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    stack<int> s;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        s.push(temp->data);
        if(temp->right)
        {
            q.push(temp->right);
        }
        if(temp->left)
        {
            q.push(temp->left);
        }
    }
    while(!s.empty())
    {
        int x=s.top();
        v.push_back(x);
        s.pop();
    }
    return v;
}
