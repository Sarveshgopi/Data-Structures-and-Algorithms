/*

Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.

Note:
The initial and the target position co-ordinates of Knight have been given accoring to 1-base indexing.

*/

class Solution 
{
  public:
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    std::queue<pair<int,int> > x;
	    x.push({KnightPos[0]-1,KnightPos[1]-1});
	    std::vector<pair<int,int> > a{{-1,-2},{-1,2},{-2,-1},{-2,1},{1,-2},{1,2},{2,-1},{2,1}};
	    int min_moves=0;
	    std::vector<vector<bool> > vis(N,vector<bool>(N,false));
	    vis[KnightPos[0]-1][KnightPos[1]-1]=true;
	    while(!x.empty())
	    {
	        int s=x.size();
	        for(int i=0;i<s;i++)
	        {
	            pair<int,int> curr=x.front();
	            x.pop();
	            int d=curr.first,e=curr.second;
	            if(d==TargetPos[0]-1 && e==TargetPos[1]-1)
	            {
	                return min_moves;
	            }
	            for(int k=0;k<8;k++)
	            {
	                int nx=d+a[k].first,ny=e+a[k].second;
	                if(nx>=0 && nx<N && ny>=0 && ny<N && vis[nx][ny]==false)
	                {
	                    x.push({nx,ny});
	                    vis[nx][ny]=true;
	                }
	            }
	        }
	        min_moves++;
	    }
	    return -1;
	}
};
