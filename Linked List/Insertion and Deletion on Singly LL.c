#include<stdio.h>
#include<stdlib.h>

struct LL
{
    int data;
    struct LL *next;
 }*first=NULL,*last=NULL;
 
 void create(int a[],int n)
 {
     int i;
     struct LL *t;
     first=(struct LL*)malloc(sizeof(struct LL));
     first->data=a[0];
     first->next=NULL;
     last=first;
     for(i=1;i<n;i++)
     { 
        t=(struct LL*)malloc(sizeof(struct LL));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
     }
 }

void insert(struct LL *p,int pos,int ele)
{
     if(pos>=0)
     {
         struct LL *newnode;
         newnode=(struct LL*)malloc(sizeof(struct LL*));
         newnode->data=ele;
         if(pos==0)
         {
             newnode->next=first;
             first=newnode;
         }
         else
         {
             for(int i=0;i<pos-1 && p!=NULL;i++)
             {
                 p=p->next;
             }
             newnode->next=p->next;
             p->next=newnode;
         }
     }
}

void delete(struct node *p,int pos1)
{
    if(pos1>=0)
    {
        if(pos1==0)
        {
            struct node *temp=first;
            first=first->next;
            free(temp);
        }
    }
}
int main()
{
      int n;
      scanf("%d",&n);
      int a[n],z,pos,ele,pos1;
      for(z=0;z<n;z++)
      {
          scanf("%d ",&a[z]);
      }
    create(a,n);
    scanf("Enter the position(starts from 1) for insertion %d\n",&pos);
    scanf("Enter the element to be inserted %d",&ele);
    insert(first,pos,ele);
    scanf("Enter the position of the node to be deleted %d",&pos1);
    delete(first,pos1);
    return 0;
}
