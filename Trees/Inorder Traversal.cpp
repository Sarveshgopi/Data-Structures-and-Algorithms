/* This is just a codee snippet  */

/* Inorder -> left , root , right .  */

struct tree
{
  int data;
  struct tree *left,*right;
}*root=NULL;

void inorder(struct tree *root)
{
  if(root==NULL)
  {
    return ;
  }
  inorder(root->left);
  std::cout<<root->data<<" ";
  inorder(root->right);
}
