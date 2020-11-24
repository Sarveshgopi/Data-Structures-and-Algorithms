#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    std::cin>>n;
    long int a[n],i,j;
    for(i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<=(n-2);i++)
    {
        for(j=i+1;j<=(n-1);j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    std::cout<<"Sorted Array is"<<endl;
    for(i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
    }
    return 0;
}
