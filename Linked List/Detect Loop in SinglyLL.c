/* This is a code snippet */

struct LL
{
    int data;
    struct LL *next;
};

//Detecting loop using circular move algorithm
struct LL* detect_loop(struct LL *first)
{
     struct LL *p,*q;
     if(first==NULL)
     {
         return false;
     }
    else if(first->next==NULL)
    {
        return false;
    }
    else{
     p=q=first;
     do
     {
         p=p->next;
         q=q->next;
         q=(q!=NULL)?(q->next):(NULL);
     }while(p!=NULL && q!=NULL && p!=q)
     if(p==q)
     {
       return true;
     }
     return false;
     }
}
