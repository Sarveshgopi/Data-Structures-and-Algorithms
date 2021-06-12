/*  This is just a code snippet   */

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

class Solution 
{
  public:
    void mirror(Node* node) {
        std::queue<Node*> a;
        a.push(node);
        while(!a.empty())
        {
            Node *t=a.front(),*x=NULL;
            if(t->left)
            {
                a.push(t->left);
            }
            if(t->right)
            {
                a.push(t->right);
            }
            if(t->left && t->right)
            {
                x=t->left;
                t->left=t->right;
                t->right=x;
            }
            else if(t->left)
            {
                t->right=t->left;
                t->left=x;
            }
            else
            {
                t->left=t->right;
                t->right=x;
            }
            a.pop();
        }
    }
};
