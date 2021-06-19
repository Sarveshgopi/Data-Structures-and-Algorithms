void path(Node *p,vector<int> t,vector<vector<int>> &out)
{
    if(p==NULL)
    {
        return ;
    }
    t.push_back(p->data);
    if(p->left==NULL && p->right==NULL)
    {
        out.push_back(t);
        return ;
    }
    path(p->left,t,out);
    path(p->right,t,out);
}

void pathCounts(Node *root)
{
    vector<vector<int>> out;
    vector<int> t;
    path(root,t,out);
    int i,j;
    for(i=0;i<out.size();i++)
    {
        for(j=0;j<out[i].size();j++)
        {
            cout<<out[i][j]<<' ';
        }
        cout<<endl;
    }
}
