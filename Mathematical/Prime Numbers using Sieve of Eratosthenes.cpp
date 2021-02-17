#include<bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    int i,p;
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
           for(p=i*i;p<=n;p+=i)
           {
               prime[p]=false;
           }
        }
    }
    for(i=2;i<=n;i++)
    {
       if(prime[i])
       {
           std::cout<<i<<" ";
       }
    }
 }
 
 int main()
 {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int n;
     std::cin>>n;
     sieve_of_eratosthenes(n);
     return 0;
 }
                
