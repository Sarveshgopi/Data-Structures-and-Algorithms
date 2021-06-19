/*     For Adjacency List     */


class Solution
{
  public:
  vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        std::vector<int> out(V,INT_MAX);
        out[S]=0;
        std::vector<bool> vis(V,false);
        std::priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > a;
        a.push(make_pair(S,0));
        while(!a.empty())
        {
            int p=a.top().first;
            a.pop();
            vis[p]=true;
            for(auto i:adj[p])
            {
                if(out[p]+i[1]<out[i[0]])
                {
                    out[i[0]]=out[p]+i[1];
                    a.push(make_pair(i[0],out[i[0]]));
                }
            }
        }
        return out;
    }
};
