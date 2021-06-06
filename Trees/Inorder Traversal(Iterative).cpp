/* This is just a code snippet  */

struct tree
{
  int data;
  struct tree *left,*right;
}*root=NULL;


vector<int> inorder(struct node *root)
{
     std::vector<int> out;
     std::stack<struct node*> a; 
     struct node *c=root;
     while(c || !a.empty())
     {
        while(c)
        {
           a.push(c);
           c=c->left;
        }
       c=a.top();
       a.pop();
       out.push_back(c->data);
       c=c->right;
     }
  return out;
}
