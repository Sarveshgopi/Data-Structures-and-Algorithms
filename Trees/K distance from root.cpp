/*   This is just a code snippet   */

struct Node
{
    int data;
    Node* left;
    Node* right;
}*root=NULL;


vector<int> Kdistance(struct Node *root, int k)
{
     std::vector<int> out;
     std::queue<Node*> a;
     a.push(root);
     int count=0,s,i;
     while(!a.empty())
     {
         Node *t;
         s=a.size();
         for(i=0;i<s;i++)
         {
             t=a.front();
             if(count==k)
             {
                 out.push_back(t->data);
             }
             if(t->left)
             {
                 a.push(t->left);
             }
             if(t->right)
             {
                 a.push(t->right);
             }
             a.pop();
         }
         if(count==k)
         {
             break;
         }
         count++;
     }
     return out;
}
