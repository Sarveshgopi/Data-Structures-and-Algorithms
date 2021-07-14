// Given a BST, transform it into greater sum tree where each node contains sum of all nodes greater than that node.

/*    
struct Node
{
	int data;
	struct Node *left, *right;
};     
*/


class Solution
{
    public:
    void sum_tree(struct Node *p,int &out)
    {
         if(p==NULL)
         {
             return ;
         }
         sum_tree(p->right,out);
         out+=p->data;
         p->data=abs(p->data-out);
         sum_tree(p->left,out);
    }
    
    void transformTree(struct Node *root)
    {
        int out=0;
        sum_tree(root,out);
    }
};
