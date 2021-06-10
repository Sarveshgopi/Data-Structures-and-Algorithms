struct Node
{
    int data;
    Node* left;
    Node* right;
}*root=NULL;


class Solution
{
  public:
    int minDepth(Node *root) {
        if(root==NULL)
        {
            return NULL;
        }
        else if(root->left && root->right)
        {
            int l=min(minDepth(root->left),minDepth(root->right));
            return l+1;
        }
        else if(root->left)
        {
            return minDepth(root->left)+1;
        }
        else
        {
            return minDepth(root->right)+1;
        }
    }
};
