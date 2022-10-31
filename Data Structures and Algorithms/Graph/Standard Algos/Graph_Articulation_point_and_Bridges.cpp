#include <bits/stdc++.h>
using namespace std;

int cnt=0;
void DFS(int vertex,int par, int time, unordered_map<int,vector<int>>&adj,vector<int> &low,vector<int> &disc,vector<int> &AP, vector<int> &vis,vector<pair<int,int>>&bridges){
   
   vis[vertex] = 1;
   low[vertex] = disc[vertex] = time++;
//    cout<<vertex<<" "<<low[vertex]<<" "<<disc[vertex]<<endl;
   int child=0;
 
   for(auto i: adj[vertex]){

	   if(i==par)continue;

	   if(!vis[i]){
           child++,DFS(i,vertex,time,adj,low,disc,AP,vis,bridges);
		   low[vertex] = min(low[vertex], low[i]);
		
		   if(low[i] > disc[vertex]){
			  bridges.emplace_back(min(vertex,i),max(vertex,i));
			}
           
		   if(par == -1 && child>1)   // root has more than one child 
		     AP[vertex] = 1,cnt++;
           if(par != -1 && low[i]>=disc[vertex]){
		     AP[vertex] = 1,cnt++;
			//  cout<<"("<<vertex<<"), ";
		   }

		   
	   }
	   else if(i != par){
           low[vertex] = min(low[vertex],disc[i]);
	   }
   }

}
int main() {
	
	int V,E;cin>>V>>E;
	unordered_map<int,vector<int>>adj;
	for(int i=0;i<E;i++){
		int u,v;cin>>u>>v;
		// u--,v--;
		adj[u].emplace_back(v);
		adj[v].emplace_back(u);
	}
	vector<int>low(V+1),disc(V+1),AP(V+1,0),vis(V+1,0);
	vector<pair<int,int>>bridges;

	for(int i=0;i<V;i++){
	  if(!vis[i])
	   DFS(5,-1,0,adj,low,disc,AP,vis,bridges);
	}

	cout<<cnt<<endl;

	for(int i=0;i<V;i++){
	   if(AP[i]==1)
	     cout<<i<<" ";
	}

	// no of bridges
	sort(bridges.begin(),bridges.end());
	cout<<endl<<bridges.size()<<endl;
	for(auto x: bridges)
	cout<<x.first<<" "<<x.second<<endl;
}