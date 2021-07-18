class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
         long long int dp[n+1]={0},i,j;
         dp[0]=1;
         for(i=0;i<m;i++)
         {
             for(j=S[i];j<=n;j++)
             {
                 dp[j]+=dp[j-S[i]];
             }
         }
         return dp[n];
    }
};
