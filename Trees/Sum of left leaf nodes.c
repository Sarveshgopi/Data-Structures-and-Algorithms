/* This is just a code snippet   */
 
struct tree
{
   int data;
   struct tree *left;
   struct tree *right;
}*root=NULL;

int sum_of_left(struct tree *root)
{
    struct tree *p;
    if(p==NULL)
    {
       return 0;
    }
    else if(p->left==NULL && p->left->left==NULL && p->left->right==NULL)
    {
        return p->left->data+sum_of_left(p->right);
    }
    else
    {
        return sum_of_left(p->left)+sum_of_left(p->right);
    }
 }
    
