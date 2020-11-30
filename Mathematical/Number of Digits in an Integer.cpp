/*  ALGORITHM :
        No. of digits in an integer is floor(log(n)+1)   // log base 10
        Time efficiency : O(1)
        Space efficiency: O(1)  */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int inputnumber;
    std::cin>>inputnumber;
    std::cout<<The Number of Digits in this integer is :<<endl;
    std::cout<<floor(log(inputnumber)+1);
    return 0;
}
