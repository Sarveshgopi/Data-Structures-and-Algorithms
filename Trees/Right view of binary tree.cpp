class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
          std::queue<Node*> a;
          std::vector<int> out;
          if(root==NULL)
          {
              return out;
          }
          a.push(root);
          while(!a.empty())
          {
              int s=a.size(),i;
              for(i=0;i<s;i++)
              {
                  Node *p=a.front();
                  if(i==s-1)
                  {
                      out.push_back(p->data);
                  }
                  a.pop();
                  if(p->left)
                  {
                      a.push(p->left);
                  }
                  if(p->right)
                  {
                      a.push(p->right);
                  }
              }
          }
          return out;
    }
};
