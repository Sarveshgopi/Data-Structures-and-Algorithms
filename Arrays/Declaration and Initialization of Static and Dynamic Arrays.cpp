#include<bits/stdc++.h>
using namespace std;
int main()
{
     /* STATIC ARRAYS IN BOTH C AND CPP */
     int a[100];                                             // OUTPUT :  array named 'a' initialized with garbage values 
     int b[10]={10,20,30,40,50,60,70,80,90,100};             // OUTPUT :  array named 'b' initialized with given values
     int c[10]={10,20};                                      // OUTPUT :  array named 'c' initialized with given values and rest of the values to be zero
     int d[10]={0};                                          // OUTPUT :  array named 'd' initialized with all zeroes
     int e[]={10,20,30};                                     // OUTPUT :  array named 'e' initialized with values and the size of the array will be automatically assigned
    /* STATIC ARRAYS */

  /* DYNAMIC ARRAYS IN C */
  int *p;
  p=(int *)malloc(5*sizeof(int));            
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }
  free(p);
  /* DYNAMIC ARRAYS IN C */
  
   /* DYNAMIC ARRAYS IN CPP */
  int *k;
  k=new int[5];
  k[0]=5;
  k[1]=10;
  k[2]=7;
  delete []k;
  /* DYNAMIC ARRAYS IN CPP */
  
  /* ACCESSING THE ARRAYS FOR BOTH STATIC AND DYNMAIC ARRAYS*/
  
  printf("%d",a[2]);
  printf("%d",2[a]);
  printf("%d",*(a+2));
}
  
   
  
  
