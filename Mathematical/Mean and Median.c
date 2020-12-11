#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n],i,sum=0;
     float k;
     for(i=0;i<n;i++)
     {
         scanf("%d ",&a[i]);
         sum+=a[i];
     }
     if(n%2!=0)
     {
          k=a[n/2];
     }
     else
     {
          k=(a[n/2]+a[(n/2)-1])/2;
     }
     printf("The Mean is : %d\n",(int)sum/n);
     printf("The Median is : %d",k);
     return 0;
 }
