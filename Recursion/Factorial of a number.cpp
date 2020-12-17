#include<bits/stdc++>
using namespace std;

long int fact_num(long int n)
{
   if(n==0)
   {
       return 1;
   }
   return n*fact_num(n-1);
}

int main()
{
    long int n;
    std::cin>>n;
    std::cout<<The factorial is : <<fact_num(n);
    return 0;
}
