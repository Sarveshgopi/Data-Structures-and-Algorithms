/*  This is just the code snippet  */

struct LL
{
    int data;
    struct LL *next;
};

//Using Sliding pointers...
struct LL* reverse(struct LL *first)
{
     if(first==NULL)
     {
         return NULL;
     }
    else if(first->next==NULL)
    {
        return first;
    }
    else
    {
     struct LL *p=first,*q,*r;
     q=r=NULL;
     while(p!=NULL)
     {
         r=q;
         q=p;
         p=p->next;
         q->next=r;
     }
     first=q;
     return first;
    }
}
