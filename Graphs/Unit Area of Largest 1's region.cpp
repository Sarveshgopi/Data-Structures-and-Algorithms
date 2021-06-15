/*
Given a grid of dimension nxm containing 0s and 1s. Find the unit area of the largest region of 1s.
Region of 1's is a group of 1's connected 8-directionally(horizontally, vertically, dioganally).
 

Example 1:

Input: grid = {{1,1,1,0},{0,0,1,0},{0,0,0,1}}
Output: 5
Explanation: The grid is-
1 1 1 0
0 0 1 0
0 0 0 1
The largest region of 1's is colored
in orange.                       */

class Solution
{
    public:
    void dfs(vector<vector<int>> &grid,int x,int y,int m,int n,int &c)
    {
        if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==1)
        {
            grid[x][y]=2;
            c++;
            dfs(grid,x+1,y,m,n,c);
            dfs(grid,x,y+1,m,n,c);
            dfs(grid,x-1,y,m,n,c);
            dfs(grid,x,y-1,m,n,c);
            dfs(grid,x-1,y-1,m,n,c);
            dfs(grid,x-1,y+1,m,n,c);
            dfs(grid,x+1,y-1,m,n,c);
            dfs(grid,x+1,y+1,m,n,c);
        }
    }
  
    int findMaxArea(vector<vector<int>>& grid) {
        int out=0,m=grid.size(),n=grid[0].size(),i,j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    int c=0;
                    dfs(grid,i,j,m,n,c);
                    out=max(out,c);
                }
            }
        }
        return out;
    }
};
