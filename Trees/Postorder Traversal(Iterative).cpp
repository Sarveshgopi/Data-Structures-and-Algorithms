/* This is just a code snippet */

struct Node
{
  int data;
  Node *left,*right;
}*node=NULL;



vector<int> postOrder(Node* node)
{
    std::vector<int> out;
    std::stack<Node*> a,b;
    a.push(node);
    Node *c;
    while(!a.empty())
    {
        c=a.top();
        b.push(c);
        a.pop();
        if(c->left)
        {
            a.push(c->left);
        }
        if(c->right)
        {
            a.push(c->right);
        }
    }
    while(!b.empty())
    {
        out.push_back(b.top()->data);
        b.pop();
    }
    return out;
}
