class Solution
{
  public:
    // function to count the total  
    // number of ways to sum up to 'N' 
    int countWays(int arr[], int m, int N) 
    { 
         long long int dp[N+1]={0};
         dp[0]=1;
         long long int i,j;
         for(i=1;i<=N;i++)
         {
             for(j=0;j<m;j++)
             {
                 if(i>=arr[j])
                 {
                    dp[i]+=(dp[i-arr[j]])%10000000007;
                    dp[i]%=10000000007;
                 }
             }
         }
         return dp[N];
    } 
    
};
