/*  This is just the code snippet  */

struct LL
{
    int data;
    struct LL *next;
};

//Using Sliding pointers...
struct LL* reverse(struct LL *first)
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
