/*  This is just a code snippet   */

class Solution
{
  public:
    int maxdepth(Node *p)
    {
        if(p==NULL)
        {
            return 0;
        }
        return 1+max(maxdepth(p->left),maxdepth(p->right));
    }
    
    int mindepth(Node *p)
    {
        if(p==NULL)
        {
            return INT_MAX;
        }
        else if(p->left==NULL && p->right==NULL)
        {
            return 1;
        }
        return 1+min(mindepth(p->left),mindepth(p->right));
    }
    
    bool check(Node *root)
    {
        return mindepth(root)==maxdepth(root);
    }
};
