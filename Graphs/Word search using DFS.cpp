class Solution 
{
public:
    bool dfs(int d,int e,int m,int n,vector<vector<bool>> &vis,vector<vector<char>> &board,int p,string &word)
    {
        if(p==word.size())
        {
            return true;
        }
        if(d>=0 && d<m && e>=0 && e<n && vis[d][e]==false && board[d][e]==word[p])
        {
            vis[d][e]=true;
            if(dfs(d+1,e,m,n,vis,board,p+1,word) || dfs(d-1,e,m,n,vis,board,p+1,word)|| dfs(d,e+1,m,n,vis,board,p+1,word) || dfs(d,e-1,m,n,vis,board,p+1,word))
            {
                return true;
            }
            vis[d][e]=false;
        }
        return false;
    }
        
    bool isWordExist(vector<vector<char>>& board, string word) {
        int i,j,m=board.size(),n=board[0].size();
        std::vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(dfs(i,j,m,n,vis,board,0,word))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
