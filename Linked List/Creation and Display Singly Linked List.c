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

void display(struct LL *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
      int n;
      scanf("%d",&n);
      int a[n],z;
      for(z=0;z<n;z++)
      {
          scanf("%d ",&a[z]);
      }
    create(a,n);
    display(first);
    return 0;
}
