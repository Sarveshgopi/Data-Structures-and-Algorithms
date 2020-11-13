#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *p;
     p=(int *)malloc(3*sizeof(int)); /* p=new int[3] in cpp */
     p[0]=1;
     p[1]=2;
     p[2]=3;
      
     int *q;
     q=(int *)malloc(10*sizeof(int)); /* q=new int[10] in cpp */
     int i;
     for(i=0;i<3;i++)
     {
        q[i]=p[i];
      }
      free(p);    /* delete []p in cpp */
      p=q;
      q=NULL;
      
        return 0;
}
      
