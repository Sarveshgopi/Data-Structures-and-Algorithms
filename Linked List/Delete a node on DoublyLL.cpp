/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
         int c=0;
         Node *p=head_ref;
         if(x==1)
         {
             head_ref=head_ref->next;
             p->next=NULL;
             free(p);
         }
         else
         {
             while(p)
             {
                c++;
                if(c==x)
                {
                    Node *temp=p->prev;
                    temp->next=(p->next)?p->next:NULL;
                    if(p->next)
                    {
                        p->next->prev=temp;
                    }
                    free(p);
                    break;
                }
                p=p->next;
             }
         }
         return head_ref;
    }
};
