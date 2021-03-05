/* This is just a code snippet  */

/* Postorder -> left , right , root  */

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
  postorder(root->left);
  postorder(root->right);
  std::cout<<root->data<<" ";
}
