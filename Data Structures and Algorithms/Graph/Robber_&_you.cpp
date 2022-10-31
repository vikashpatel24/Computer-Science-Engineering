#include<bits/stdc++.h>
using namespace std;
#define pb push_back 
#define ll long long

vector<int>gr[100002];
int vis[100002],par[100002],c[100002];

void dfs(int a,int p){
    par[a]=p;
    for(int i=0;i<gr[a].size();i++)
        if(gr[a][i]!=p)
            dfs(gr[a][i],a);
}

int dfs1(int a,int p){
    int ans =- 100000;
    for(int i=0;i<gr[a].size();i++)
        if(gr[a][i]!=p)
            ans=max(ans,dfs1(gr[a][i],a));
    if(ans==-100000)ans=0;
    return ans+c[a];
}

int main()
{
    int n,r,u,v;
    cin>>n>>r;
    for(int i=1;i<n;i++){
        cin>>u>>v;
        gr[u].pb(v);
        gr[v].pb(u);
    }
    // int c[n+1];
    for(int i=1;i<=n;i++){
        cin>>c[i];
        vis[i]=0;
    }
    dfs(1,1);
    vector<int>vv;   // storing the path
    
    while(r!=1){
        vv.pb(r);
        r=par[r];
    }

    vv.pb(1);

   for(auto x: vv)cout<<x<<" ";

    for(int i=0;i<(vv.size())/2;i++)
        c[vv[i]]=0;                  // half of the path will be of robber
    if((vv.size()) % 2 == 1)         // if total length of the path is odd then they will definately meet pathLen/2  
        c[vv[(vv.size())/2]]/=2;
    cout<<dfs1(1,1);
    
    return 0;
    
}