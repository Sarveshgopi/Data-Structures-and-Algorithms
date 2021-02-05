/* This is just a code snippet  */

struct Node
{
     int data;
     struct Node *next;
}*head=NULL;


class solution
{
    public:
        int get_nth_node(struct Node *head,int n)
        {
             if(head==NULL)
             {
                 return NULL;
             }
             else if(head->next==NULL)
             {
                 return head->datal
             }
             else
             {
                struct Node *p,*q;
                p=q=head;
                int count=0;
                while(p!=NULL)
                {
                    count++;
                    if(count>n)
                    {
                        q=q->next;
                    }
                    p=p->next;
                }
              return q->data;
            }
        }
    };
