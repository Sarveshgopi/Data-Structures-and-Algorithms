/*    This is just a code snippet   */

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
 }*root=NULL;


int height(struct tree *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else
    {
        int l=height(root->left);
        int r=height(root->right);
        if(l>=r)
        {
            return l+1;
        }
        else
        {
            return r+1;
        }
    }
}
