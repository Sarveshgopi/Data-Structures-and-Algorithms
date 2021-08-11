class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	      int i,j;
	      std::vector<int> out,deg(V,0);
	      for(i=0;i<V;i++)
	      {
	          for(j=0;j<adj[i].size();j++)
	          {
	              deg[adj[i][j]]++;
	          }
	      }
	      std::queue<int> a;
	      for(i=0;i<V;i++)
	      {
	          if(deg[i]==0)
	          {
	              a.push(i);
	          }
	      }
	      while(!a.empty())
	      {
	          int u=a.front();
	          a.pop();
	          out.push_back(u);
	          for(i=0;i<adj[u].size();i++)
	          {
	              deg[adj[u][i]]--;
	              if(deg[adj[u][i]]==0)
	              {
	                  a.push(adj[u][i]);
	              }
	          }
	      }
	      return out;
	}
};
