#include<stdio.h>
#include<stdlib.h>

struct LL
{
    int data;
    struct LL *next;
 };
 
 void create(int a[],int n)
 {
     int i;
     struct LL *first=NULL;
     for(i=0;i<n;i++)
 }
int main()
{
      int n;
      scanf("%d",&n);
      int a[n],i;
      for(i=0;i<n;i++)
      {
          scanf("%d ",&a[i]);
      }
    create(a,n);
    display(first);
    return 0;
}
