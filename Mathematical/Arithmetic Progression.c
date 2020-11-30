/*   Arithmetic Progression is said to be a series of numbers, in which the difference between any two consecutive numbers are same.
         ALGORITHM:
               The nth term in the arithmetic progression is firstterm + (n-1)*commondifference
               The sum of first n numbers is (0.5*n) + (2*firstterm)+(n-1)*commondifference             */

#include<stdio.h>
#include<stdlib.h>
int main()
{  
   int firstterm,secondterm;
   scanf("%d %d",&firstterm,&secondterm);
   int commondiff=secondterm-firstterm;
   int n;
   scanf("%d",&n);
   int nterm = firstterm + ((n-1)*commondiff);
   int sum_of_nterm = (0.5)*n + ((2*firstterm)+((n-1)*commondiff));
   printf("The nth term is:\n");
   printf("%d",nterm);
   printf("The sum of first n terms is:\n");
   printf("%d",sum_of_nterm);
   return 0;
}
