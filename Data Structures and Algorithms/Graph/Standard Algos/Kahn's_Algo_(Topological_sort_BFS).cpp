#include <bits/stdc++.h>
using namespace std;

// It's same like Prim's Alogrithm, each node will be traversed more than once

// TC = O(VlogV+ELogV) = ElogV
// SC = O(V)+O(V) { O(V) for Queue & O(V) for Indegree array}
vector<int> topoSort(int v, vector<int> adj[]) 
{
	priority_queue<int, vector<int>, greater<int>>q;
    vector<int>indegree(v+1,0),res;
	

	for(int i=0;i<v;i++){        // O(V)
		for(auto x: adj[i])
		   indegree[x]++ ;	
	}
	for(int i=0;i<v;i++){        // O(V)
		if(indegree[i]==0)
		   q.push(i);	
	}


  // O(V(VlogV + V)) = O(V^2(logV) + VlogV) = O(Elogv + VlogV)
  

	while(!q.empty()){   // for every vertex O(V)

		int key = q.top();     // O(logV) |_ log(V)
		q.pop();               // O(logV) |   
		// using multiset above pop opration will be in O(1) using s.begin() iterator => s.erase(s.begin())   // O(1)
		
		res.push_back(key+1);

        // you will explore all the Adjacent edges for each vetex,
        // So TC of this for loop is O(ElogV)

       // for key, We are going through all its vertices not the edge
		for(auto nbr: adj[key]){        // O(V)
			if(--indegree[nbr]==0)
			  q.push(nbr);	            // O(logV)
		}
	}

	
	return res;
}

int main() {
	
	int v,e;cin>>v>>e;
	vector<int>adj[v+1];
	for(int i=0;i<e;i++){    // O(E)
		int u,v;cin>>u>>v;
	
		adj[--u].push_back(--v);
		
	}
	
	
	vector<int>ans = topoSort(v,adj);
	for(auto x: ans)
		cout<<x<<" ";

}
// Input:
// 5 6
// 1 2
// 1 3
// 2 3
// 2 4
// 3 4
// 3 5

// output: 
// 1 2 3 4 5




// Striver TopoSort using BFS

