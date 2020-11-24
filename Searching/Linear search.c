#include<stdio.h>
#include<stdlib.h>
int main()
{
     long int n;
     scanf("%ld",&n);
     long int a[n],i,k=0,x;
     for(i=0;i<n;i++)
     {
        scanf("%ld ",&a[i]);
      }
      scanf("%ld",&x);
      for(i=0;i<n;i++)
      {
          if(a[i]==x)
          {
             printf("Index is %ld",i);
             k++;
             break;
          }
      }
      if(k==0)
      {
         printf("Not Found");
      }
      return 0;
 }
