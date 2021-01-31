/* This is a code snippet */

 struct LL
 {
    int data;
    struct LL *next;
 };
 
 // Merging means concantenate them in a sorted manner.
 
 struct LL *merge(struct LL* first, struct LL* second)
 {
    struct LL *p=first,*q=second,*third,*last;
    if(p->data < q->data)
    {
         third=last=p;
         p=p->next;
         last->next=NULL;
    }
    else
    {
         third=last=q;
         q=q->next;
         last->next=NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
             last=p;
             p=p->next;
             last->next=NULL;
        }
        else
        {
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL)
    {
       last->next=p;
     }
     else
     {
        last->next=q;
      }
      return third;
  }
  
  /*
  Analysis:
       Time efficiency ϵ θ(m+n)
       m is the no. of nodes in 1st LL
       n is the no. of nodes in 2nd LL
    */
