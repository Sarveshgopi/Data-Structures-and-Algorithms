/* This is only an algorithm  */

void merge(int arr[],int left,int mid,int right)
{
      int start1=left;
      int start2=mid+1;
      int temp[(right-mid)+(mid-left+1)],ind=0;
      while(start1<=mid && start2<=right)
      {
          if(arr[start1]<arr[start2])
          {
             temp[ind++]=arr[start1++];
          }
          else
          {
            temp[ind++]=arr[start2++];
          }
      }
     while(start1<=mid)
     {
       temp[ind++]=arr[start1++];
     }
     while(start2<=right)
     {
       temp[ind++]=arr[start2++];
     }
     ind=0;
     for(int i=left;i<=right;i++)
     {
       arr[i]=temp[ind++];
     }
}

void mergesort(int arr[],int left,int right)
{
  if(left<right)
  {
     int mid=left+(right-left)/2;
     mergesort(arr,left,mid);
     mergesort(arr,mid+1,right);
  }
}
