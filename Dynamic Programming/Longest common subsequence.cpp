#include<bits/stdc++.h>
using namespace std;

int main(int *argc,char **argv)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    std::string a,b;
    std::cin>>a;
    std::cin>>b; 
    int i,j,m=a.size(),n=b.size(),out[m+1][n+1];
    for(i=0;i<=m;i++)
    {
      for(j=0;j<=n;j++)
      {
        if(i==0 || j==0)
        {
          out[i][j]=0;
        }
        else if(a[i-1]==b[j-1])
        {
          out[i][j]=out[i-1][j-1]+1;
        }
        else
        {
          out[i][j]=max(out[i-1][j],out[i][j-1]);
        }
      }
    }
     std::cout<<out[m][n]<<endl;
     return 0;
}
