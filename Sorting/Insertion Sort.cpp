#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    std::cin>>n;
    long int a[n],i,j,key;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
       key=a[i];
       j=i-1;
       while(j>=0 && key<a[j])
       {
           a[j+1]=a[j];
           j--;
       }
      a[j+1]=key;
    }
    std::cout<<"Sorted Array is"<<endl;
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
    return 0;
}
