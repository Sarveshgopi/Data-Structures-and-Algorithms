/* This is just a code snippet  */

/* Preorder -> root , left , right  */

struct tree
{
  int data;
  struct tree *left,*right;
}*root=NULL;


void postorder(struct tree *root)
{
  if(root==NULL)
  {
    return ;
  }
  std::cout<<root->data<<" ";
  postorder(root->left);
  postorder(root->right);
}
