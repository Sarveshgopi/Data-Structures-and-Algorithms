/*
Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.
*/

long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
	for(i=3;i<=n;i++)
	{
	    if((i-3)>=0)
	    {
	        table[i]+=table[i-3];
	    }
	}
	for(i=5;i<=n;i++)
	{
	    if((i-5)>=0)
	    {
	        table[i]+=table[i-5];
	    }
	}
	for(i=10;i<=n;i++)
	{
	    if((i-10)>=0)
	    {
	        table[i]+=table[i-10];
	    }
	}
	
	return table[n];
}
