#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n],i,sum=0;
     for(i=0;i<n;i++)
     {
         scanf("%d ",&a[i]);
         sum+=a[i];
     }
     printf("The Mean is : %d",(int)sum/n);
     return 0;
 }
