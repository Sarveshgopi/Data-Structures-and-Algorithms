/* 
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
*/

class Solution{
    public:
    int equilibriumPoint(long long a[], int n) {
          if(n==1)
          {
              return 1;
          }
          long long sum=0;
          int i;
          for(i=0;i<n;i++)
          {
              sum+=a[i];
          }
          int left=0,right=sum-a[0];
          for(i=1;i<n-1;i++)
          {
              left+=a[i-1];
              right-=(a[i]);
              if(left==right)
              {
                  return i+1;
              }
          }
          return -1;
    }
};
