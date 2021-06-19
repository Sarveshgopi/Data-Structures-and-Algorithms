/*

Given a dictionary of distinct words and an M x N board where every cell has one character. 
Find all possible words from the dictionary that can be formed by a sequence of adjacent characters on the board. 
We can move to any of 8 adjacent characters, but a word should not have multiple instances of the same cell.

*/

class Solution 
{
public:
    bool dfs(int d,int e,int m,int n,vector<vector<char>> &board,string word,int index,vector<vector<bool>> &vis)
    {
        if(index==word.size())
        {
            return true;
        }
        if(d>=0 && d<m && e>=0 && e<n && board[d][e]==word[index] && vis[d][e]==false)
        {
            vis[d][e]=true;
            if(dfs(d+1,e,m,n,board,word,index+1,vis) || dfs(d-1,e,m,n,board,word,index+1,vis) || dfs(d,e+1,m,n,board,word,index+1,vis) || dfs(d,e-1,m,n,board,word,index+1,vis) || dfs(d+1,e+1,m,n,board,word,index+1,vis) || dfs(d+1,e-1,m,n,board,word,index+1,vis) || dfs(d-1,e-1,m,n,board,word,index+1,vis) || dfs(d-1,e+1,m,n,board,word,index+1,vis))
            {
                return true;
            }
            vis[d][e]=false;
        }
        return false;
    }
    
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    int i,j,m=board.size(),n=board[0].size(),f,k;
	    std::vector<string> out;
	    for(k=0;k<dictionary.size();k++)
	    {
	        std::vector<vector<bool>> vis(m,vector<bool>(n,false));
	        f=0;
	        for(i=0;i<m;i++)
	        {
	            for(j=0;j<n;j++)
	            {
	                if(dictionary[k][0]==board[i][j])
	                {
	                    if(dfs(i,j,m,n,board,dictionary[k],0,vis))
	                    {
	                        out.push_back(dictionary[k]);
	                        f++;
	                        break;
	                    }
	                }
	            }
	            if(f==1)
	            {
	                break;
	            }
	        }
	    }
	    return out;
	}
};
