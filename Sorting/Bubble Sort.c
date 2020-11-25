#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    long int a[n],i,j,t;
    for(i=0;i<n;i++)
    {
       scanf("%ld ",&a[i]);
    }
    for(i=0;i<=(n-2);i++)
    {
        for(j=0;j<=(n-2-i);j++)
        {
            if(a[j]>a[j+1])
            {
                 t=a[j];
                 a[j]=a[j+1];
                 a[j+1]=t;
            }
         }
     }
     printf("ARRAY AFTER SORTING\n");
     for(i=0;i<n;i++)
     {
        printf("%ld ",a[i]);
     }
     return 0;
}
