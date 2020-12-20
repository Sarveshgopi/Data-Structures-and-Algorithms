#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     std::cin>>n;
     int a[1000]={0},i;
     a[0]=0;
     a[1]=1;
     std::cout<<a[0]<<" "<<a[1]<<" ";
     for(i=2;i<n;i++)
     {
         a[i]=a[i-2]+a[i-1];
         std::cout<<a[i]<<" ";
     }
     
     return 0;
}
