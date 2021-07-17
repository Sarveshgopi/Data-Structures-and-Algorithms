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
    a=(1>>(k-1)) | a;
    std::cout<<a;
  return 0;
}
