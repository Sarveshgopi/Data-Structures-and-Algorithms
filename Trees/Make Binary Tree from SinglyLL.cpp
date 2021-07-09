/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

void convert(Node *head, TreeNode *&root) {
        root=new TreeNode(head->data);
        root->left=NULL;
        root->right=NULL;
        head=head->next;
        std::queue<TreeNode*> a;
        a.push(root);
        while(head)
        {
            TreeNode* curr=a.front();
            a.pop();
            curr->left=new TreeNode(head->data);
            a.push(curr->left);
            head=head->next;
            if(head==NULL)
            {
                return ;
            }
            curr->right=new TreeNode(head->data);
            a.push(curr->right);
            head=head->next;
        }
}
