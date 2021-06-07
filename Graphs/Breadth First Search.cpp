class Solution
{
    public:
	  vector<int> bfsOfGraph(int V, vector<int> adj[])
	 {
	    std::queue<int> a;
	    std::vector<int> out;
	    bool vis[V];
	    memset(vis,false,sizeof(vis));
	    a.push(0);
	    int k,i;
	    while(!a.empty())
	    {
	        k=a.front();
	        out.push_back(k);
	        a.pop();
	        for(i=0;i<adj[k].size();i++)
	        {
	            if(vis[adj[k][i]]==false)
	            {
	                a.push(adj[k][i]);
	                vis[adj[k][i]]=true;
	            }
	        }
	    }
	    return out;
	}
};
