/*
            Given a street of N houses (a row of houses), each house having K amount of money kept inside;
            now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses.
            Find the maximum money he can rob.
                                                           */

#include<bits/stdc++.h>
using namespace std;

class solution
{
   public:
        int maximum_money(int N,int K)
        {
             int p=(N+1)/2;
             return p*K;
         }
  };
   
  int main()
  {
       int N,K;
       std::cin>>N;
       std::cin>>K;
       solution ob;
       std::cout<<ob.maximum_money(N,K);
       return 0;
  }
