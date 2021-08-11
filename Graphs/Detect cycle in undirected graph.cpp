/*       Topological sorting using Kahn's algorithm    */

class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    std::vector<int> deg(N,0);
	    std::vector<int> adj[N];
	    int i,out=0;
	    for(i=0;i<prerequisites.size();i++)
	    {
	        pair<int,int> temp=prerequisites[i];
	        adj[temp.second].push_back(temp.first);
	        deg[temp.first]++;
	    }
	    std::queue<int> a;
	    for(i=0;i<N;i++)
	    {
	        if(deg[i]==0)
	        {
	            a.push(i);
	        }
	    }
	    while(!a.empty())
	    {
	        int x=a.front();
	        a.pop();
	        for(i=0;i<adj[x].size();i++)
	        {
	            deg[adj[x][i]]--;
	            if(deg[adj[x][i]]==0)
	            {
	                a.push(adj[x][i]);
	            }
	        }
	        out++;
	    }
	    return N==out;
	}
};
