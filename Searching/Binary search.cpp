#include<bits/stdc++.h>
using namespace std;

class binary
{
     public:
        int bin_search(int n,int ele,int a)
        {
             int low=0,high=n-1,mid;
             while(low<high)
             {
                 mid=(low+high)/2;
                 if(a[mid]==ele)
                 {
                     return mid;
                 }
                 else if(a[mid]>ele)
                 {
                      high=mid-1;
                 }
                 else
                 {
                     low=mid+1;
                 }
             }
           return -1;
        }
    };
    
    int main()
    {
         int n=5;
         int a[]={2,4,2,7,4};
         int ele=7;
         std::sort(a,a+n);
         int y=bin_search(n,ele,a);
         if(y==-1)
         {
             std::cout<<"Not Present";
         }
         else
         {
            std::cout<<"Found at position: "<<y+1;
         }
         return 0;
    }
