#include<stdio.h>
#include<stdlib.h>
int main()
{
     char a[1001];
     scanf("%s",a);
     int i,j,c;
     for(i=48;i<=57;i++)
     {
         c=0;
         for(j=0;j<strlen(a);j++)
         {
             if(isdigit(a[j]) && a[j]==i)
             {
                c++;
              }
          }
        printf("%d ",c);
    }
    return 0;
    }
