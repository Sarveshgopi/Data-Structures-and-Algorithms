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

int sum(struct LL *u)
{
   int s=0;
   while(u)
   {
      s+=(u->data);
      u=u->next;
   }
   return s;
}

int count(struct LL *v)
{
   int c=0;
   while(v)
   {
      c++;
      v=v->next;
   }
   return c;
}

int max(struct LL *w)
{
    int m=w->data;
    w=w->next;
    while(w)
    {
       if((w->data)>m)
       {
         m=w->data;
       }
       w=w->next;
    }
    return m;
}

void search(struct LL *r,int key)
{
    if(r==NULL)
    {
        printf("No Element in the list");
    }
    else
    {
        while(r)
        {
            if(r->data==key)
            {
                printf("The element is present");
                flag++;
                break;
            }
            r=r->next;
        }
        if(flag==0)
        {
            printf("The element is not found");
        }
    }
}

int main()
{
   int n;
   scanf("%d",&n);
   int a[n],z,key;
   for(z=0;z<n;z++)
   {
      scanf("%d ",&a[z]);
   }
   create(a,n);
   printf("The Sum of the list is %d\n",sum(first));
   printf("The Number of nodes present in the list is %d\n",count(first));
   printf("The maximum element in the list is %d\n",max(first));
   scanf("Enter the Element to be searched %d",&key);
   search(first,key);
   return 0;
}
    
 }
