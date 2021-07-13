/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

vector<int> noSibling(Node* node)
{
     std::vector<int> out;
     if(node==NULL)
     {
         out.push_back(-1);
         return out;
     }
     std::queue<Node*> a;
     a.push(node);
     while(!a.empty())
     {
         Node *t=a.front();
         a.pop();
         if(t->left==NULL && t->right==NULL)
         {
             continue;
         }
         if(t->left==NULL || t->right==NULL)
         {
             if(t->left==NULL)
             {
                 out.push_back(t->right->data);
             }
             else
             {
                 out.push_back(t->left->data);
             }
         }
         if(t->left)
         {
             a.push(t->left);
         }
         if(t->right)
         {
             a.push(t->right);
         }
     }
     if(out.size()==0)
     {
         out.push_back(-1);
     }
     std::sort(out.begin(),out.end());
     return out;
}
