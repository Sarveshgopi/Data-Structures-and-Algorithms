/*  This is just a code snippet    */


struct node
{
  int data;
  struct node *left,*right;
}*root=NULL;


class solution
{
  public:
       vector<int> inorder(struct node *root)
       {
           std::stack<struct node*> a;
           a.push(root);
           std::vector<int> out;
           struct node *p;
           while(!a.empty())
           {
               p=a.top();
               out.push_back(p->data);
               a.pop();
               if(p->right!=NULL)
               {
                   a.push(p->right);
               }
               if(p->left!=NULL)
               {
                  a.push(p->left);
               }
           }
         return out;
       }
