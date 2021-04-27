#include<bits/stdc++.h>
using namespace std;

int main(int argc,char **argv)
{
     int x;
     std::cin>>x;
     if(x && (!x & (x-1) ))
     {
       std::cout<<"Yes";
     }
     else
     {
       std::cout<<"No";
     }
  return 0;
}
