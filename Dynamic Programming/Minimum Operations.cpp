
/*
Given a number N. Find the minimum number of operations required to reach N starting from 0. You have 2 operations available:

Double the number
Add one to the number   */



class Solution
{
  public:
    int minOperation(int n)
    {
        int dp[n+1]={0};
        dp[0]=0;
        dp[1]=1;
        int i;
        for(i=2;i<=n;i++)
        {
            if(i%2==0)
            {
               dp[i]=min(dp[i/2],dp[i-1])+1;
            }
            else
            {
                dp[i]=dp[i-1]+1;
            }
        }
        return dp[n];
    }
};
