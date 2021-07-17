/*  

1) Left shift given number 1 by k-1 to create 
   a number that has only set bit as k-th bit.
    temp = 1 << (k-1)
2) Return bitwise XOR of temp and n.  Since temp
   has only k-th bit set, doing XOR would toggle 
   only this bit.                                         */


#include<bits/stdc++.h>
using namespace std;

int main(int *argc,char **argv)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,k;
    std::cin>>a;
    std::cin>>k;
    a = a ^ (1<<(k-1))
    std::cout<<a;
    return 0;
}
