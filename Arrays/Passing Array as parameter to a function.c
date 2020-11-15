#include<stdio.h>
#include<stdlib.h>

void fun(int a[],int n);

/* ARRAY CAN BE PASSED AS THE PARAMETER TO THE FUNCTION */ 
// START OF THE SCRIPT

int main()
{
      int a[1000],n,i;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
         scanf("%d ",&a[i]);
      }
      fun(a,n);
      void fun(int a[],n)
      {
          int k;
          for(k=0;k<n;k++)
          {
              printf("%d ",a[i]);
          }
      }

return 0;

// END OF THE PROGRAM //
}
