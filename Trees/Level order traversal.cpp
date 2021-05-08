/*  This is just a code snippet  */


struct node
{
  int data;
  struct node *left,*right;
}*root=NULL;


class Solution
{
  public:
       void getLevelDiff(struct node *root)
       {
         std::queue<struct node*> a;
         a.push(root);
         struct node *p=root;
         std::cout<<"The level order traversal is : "<<endl;
         while(p!=NULL)
         {
             std::cout<<p->data<<" ";
             if(p->left!=NULL)
             {
                 a.push(p->left);
             }
             if(p->right!=NULL)
             {
                 a.push(p->right);
             }
             a.pop();
             p=a.front();
         }
    }
};
