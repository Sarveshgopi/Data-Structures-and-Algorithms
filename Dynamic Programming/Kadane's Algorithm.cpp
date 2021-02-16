/*  This is just a code snippet  */

/*   Given an n no. of integers, find out the maximum contagious sub-array sum   */

int max_sum(int arr[],int n)
{
     int curr,total,i;
     curr=total=arr[0];
     for(i=1;i<n;i++)
     {
        curr=max(arr[i],curr+arr[i]);
        total=max(total,curr);
     }
     return total;
}
