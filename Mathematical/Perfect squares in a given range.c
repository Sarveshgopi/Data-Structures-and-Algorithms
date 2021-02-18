#inlcude<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int out=floor(sqrt(n))-ceil(sqrt(m))+1;
    printf("%d",out);
  return 0;
}
