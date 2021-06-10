/* This is just a code snippet   */

class Solution 
{
    public:
	void dfs(vector<int> adj[],int u,bool vis[],vector<int> &out)
	{
	    if(vis[u]==false)
	    {
	        out.push_back(u);
	        vis[u]=true;
	        int i;
	        for(i=0;i<adj[u].size();i++)
	        {
	            if(adj[u][i]!=0 && vis[adj[u][i]]==false)
	            {
	                dfs(adj,adj[u][i],vis,out);
	            }
	        }
	    }
	}
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	     bool vis[V];
	     memset(vis,false,sizeof(vis));
	     std::vector<int> out;
	     dfs(adj,0,vis,out);
	     return out;
	}
};
