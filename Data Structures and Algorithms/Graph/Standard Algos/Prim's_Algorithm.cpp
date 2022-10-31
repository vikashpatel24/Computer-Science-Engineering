#include <bits/stdc++.h>
using namespace std;

// https://www.youtube.com/watch?v=eB61LXLZVqs

// TC O(V^2) in Worst Case can be improved O((V+E)logV) = O(ElogV) using binary heap(priority_queue)
// and can be further improved to (E + VlogV) using Fibonaaci heap (extracting the min is logV amortized cost ans updating an entry in it is O(1) amortized)
 // Auxiliary Space: O(V^2)
// Approach :-

// pick the smallest edge weight
// include in MSTset
// update the key for adjacent vetices

int min_key(int V,vector<int>&mstSet, vector<int>&key){
    // Vertec having minimum key and not in mstSet
    int mnkey_vertx = -1, mn_key = 1e5;
    for(int i=0;i<V;i++){
        if(!mstSet[i] && mn_key > key[i])
           mnkey_vertx = i, mn_key = key[i];
    }
    return mnkey_vertx;    // return Vertex having  minimum key value
}


// TC = O(V^2)
void Prims(int &V,vector<vector<int>>adj[], vector<int>&key, vector<int>&mstSet,vector<int>&parent){
   
   for(int i=0;i<V;i++){ 
       
	   int mnKey_Vertx = min_key(V,mstSet,key);  
	   
	   mstSet[mnKey_Vertx] = 1;   // include Minimum Key Vertex into out MST Set
	   
	   for(vector<int>&node : adj[mnKey_Vertx]){
	       int nbr = node[0], wgt = node[1];
	       if(!mstSet[nbr] && key[nbr]>wgt)   
	          key[nbr] = wgt, parent[nbr] = mnKey_Vertx;
	   
	   }
   }
}


  //  Time Comleity  of Prime's alog using binary Heap for Dense Graph

  // O(V(logV + VlogV)) = O(VlogV + V^V logV) 
  // But for worst case analysis (dense graph), (V*V) is roughly 
  // equal to number of edges E, 
  // So, O(VlogV + V^V logV)  = O(VlogV + ElogV)  =~ O(ElogV) ( since V<<E,  hence (ElogV))

  // Time Comleity Using Fibonacci heap
  // O(E + logV)


void Prims_Using_Priority_queue(int &V,vector<vector<int>>adj[], vector<int>&key, vector<int>&mstSet,vector<int>&parent){
	   
	   priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
//	          wgt,vertx = 0
	   pq.push({0,0});   // initiallly starting with 0th vertex and initialise weight as 0 (as there is no vetex where you came from, means u are the starting vetrtex So initialise whatever value u want it doen't matter)

	   //for(int i=0;i<V;i++){ 
	   while(!pq.empty()){                     // O(V)         
	       
	       // to extracting and deletng the vertex O(logV) 
    	   int mnKey_Vertx = pq.top().second;  //destination vertex
    	  
    	   pq.pop();           
    	   
    	   mstSet[mnKey_Vertx] = 1;   // include Minimum Key Vertex into out MST Set , Now its work is finished
    	   // update key values of all the adjacent vertices of this(mnKey_Vertx) vertex
    	   
    	   for(vector<int>&node : adj[mnKey_Vertx]){   // O(V)
    	       int nbr = node[0], wgt = node[1];
    	       if(!mstSet[nbr] && key[nbr]>wgt){  
    	           //cout<<wgt<<" ";
    	          key[nbr] = wgt, parent[nbr] = mnKey_Vertx;
    	          pq.push({wgt,nbr});                // O(logV) 
    	          
    	       }
    	   
    	   }
    	   //cout<<endl;
	   }
	}


int PrimeSpanningTree(int V, vector<vector<int>> adj[])
{
     // initialise All key to infinite 
     // initialise MST set =0 as No element present in our MST set
     // initialise parent of all vetex = -1
     vector<int>key(V+1,1e5),mstSet(V+1,0),parent(V+1,-1);
     key[0] = 0;   // Initialise  starting vertex as 0 , its key =0
     Prims(V,adj,key,mstSet,parent);
     
    // Now have parent array having MST edges between i & parent
     
    // Noew Calculating the weight for i and Parent[i]
    int weightSum=0;
   
    for(int i=0;i<V;i++){
        for(auto x: adj[i]){
            if(x[0]==parent[i])  
              weightSum += x[1];
        }
    }
     return weightSum;
}

int main() {
	
	int V,E;cin>>V>>E;
	vector<vector<int>>adj[V+1];
	for(int i=0;i<E;i++){    // O(E)
		int u,v,w;cin>>u>>v>>w;
	
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
		
	}
	cout<<PrimeSpanningTree(V,adj);

	return 0;
}

// {u, v, w}
// Input:                    5
// 3 3                 0 ---------1
// 0 1 5                \        /
// 1 2 3                 \      /  
// 0 2 1                1 \    / 3
//                         \  /
//                          2


// Output: 4

// Explanation
//     1
// 0------2  
//                    3 + 1 = 4
//     3            
// 1------2
//