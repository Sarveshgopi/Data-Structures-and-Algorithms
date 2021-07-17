#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     std::string a;
     std::cin>>a;
     int out[26]={0},i,j;
     for(i=0;i<a;i++)
     {
       out[a[i]-97]++;
     }
     for(i=0;i<26;i++)
     {
       for(j=0;j<out[i];j++)
       {
            printf("%c",i+97);
       }
     }
  return 0;
}
