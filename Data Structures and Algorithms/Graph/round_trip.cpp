#include <bits/stdc++.h>
#define all(x)                x.begin(),x.end()
#define pb                    push_back
#define IOfast                ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
 
int visited[(int)2e5 + 1];
vector <int> graph[(int)2e5 + 1];
vector<int> path; // to keep track of paths
 
void dfs(int node,int par)
{
  visited[node] = 1;
  path.pb(node);
  for(auto &next:graph[node])
  {
    if(par == next) continue;
 
    if(visited[next])
    {
       path.pb(next);
       int i = (find(all(path),next) - path.begin());
       cout<<path.size() - i<<"\n";
 
       while(i<path.size())
         cout<<path[i++]<<" ";
 
       exit(0);
    }
    else
      dfs(next,node);
  }
  path.pop_back();
}
 
void solve()
{
  int n,m,u,v;
  cin>>n>>m;
 
  while(m--)
    cin>>u>>v , graph[u].pb(v) , graph[v].pb(u);
 
 for(int i = 1;i<=n;i++)
    if(visited[i] == 0)
       dfs(i,0);
 
 cout<<"IMPOSSIBLE";
}
 
int main()
{
  IOfast;
  solve();
 
  return 0;
}