/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        struct Node *p=head,*r=NULL;
        struct Node *out=(struct Node*)malloc(sizeof(struct Node));
        out->data=data;
        out->next=NULL;
        while(p)
        {
            if(p->data>data)
            {
                break;
            }
            r=p;
            p=p->next;
        }
        if(p==NULL)
        {
            r->next=out;
        }
        else
        {
            if(r==NULL)
            {
                out->next=p;
                head=out;
            }
            else
            {
               r->next=out;
               out->next=p;
            }
        }
        return head;
    }
};
