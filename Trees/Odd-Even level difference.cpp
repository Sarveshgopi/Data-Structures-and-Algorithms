/*     An Example of traversing each levels in a tree   */

struct Node
{
    int data;
    Node* left;
    Node* right;
}*root=NULL;

class Solution
{
  public:
    int getLevelDiff(Node *root)
    {
        std::queue<Node*> a;
        a.push(root);
        Node *t;
        int i,s,sum=0,sum_eve=0,sum_odd=0,count=0;
        while(!a.empty())
        {
            s=a.size();
            sum=0;
            for(i=0;i<s;i++)
            {
                t=a.front();
                sum+=t->data;
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
            count++;
            if(count%2==0)
            {
                sum_eve+=sum;
            }
            else
            {
                sum_odd+=sum;
            }
        }
        return sum_odd-sum_eve;
    }
};

