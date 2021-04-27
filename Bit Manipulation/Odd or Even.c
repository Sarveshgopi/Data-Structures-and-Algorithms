#include<stdio.h>
#include<stdlib.h>

int main()
{
      int x;
      scanf("%d",&x);
      if(!(x&1))
      {
            printf("Even");
      }
      else
      {
            printf("Odd");
      }
      return 0;
 }
