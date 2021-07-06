class Solution
{
    public:
    bool dfs(int d,int e,int m,int n,vector<vector<int>> &grid,vector<vector<bool>> &vis)
    {
        if(d>=0 && d<m && e>=0 && e<n && grid[d][e]!=0 && vis[d][e]==false)
        {
            if(grid[d][e]==2)
            {
                return true;
            }
            else
            {
               vis[d][e]=true;
               if(dfs(d+1,e,m,n,grid,vis) || dfs(d-1,e,m,n,grid,vis) || dfs(d,e-1,m,n,grid,vis) || dfs(d,e+1,m,n,grid,vis))
               {
                   return true;
               }
            }
        }
        return false;
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int i,j,m=grid.size(),n=grid[0].size();
        std::vector<vector<bool> > vis(m,vector<bool>(n,false));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    if(dfs(i,j,m,n,grid,vis))
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return false;
    }
};
