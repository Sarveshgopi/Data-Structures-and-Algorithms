/*
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.
Note: The head represents the left-most digit of the number.
*/

class Solution
{
    public:
    Node* rev(Node *&r)
    {
        Node *d=NULL,*e=NULL;
        while(r)
        {
            e=d;
            d=r;
            r=r->next;
            d->next=e;
        }
        return d;
    }
    
    Node* addOne(Node *head) 
    {
        int carry=1;
        Node *u=head;
        Node *p=rev(u);
        Node *out=p;
        while(p)
        {
            int t=p->data;
            p->data=(p->next)?(t+carry)%10:(t+carry);
            carry=((t+carry)/10==0)?0:1;
            p=p->next;
        }
        return rev(out);
    }
};
