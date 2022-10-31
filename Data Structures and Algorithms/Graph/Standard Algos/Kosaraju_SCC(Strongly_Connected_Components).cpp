// We can find all strongly connected components in O(V+E) time using Kosaraju's algorithm

// Create an empty stack 'S' and do DFS traversal of a graph. In DFS traversal, after calling recursive DFS for adjacent vertices of a vertex, push the vertex to stack. In the above graph, if we start DFS from vertex 0, we get vertices in stack as 1, 2, 4, 3, 0. 
// Reverse directions of all arcs to obtain the transpose graph. 
// One by one pop a vertex from S while S is not empty. Let the popped vertex be 'v'. Take v as source and do DFS (call DFSUtil(v)). The DFS starting from v prints strongly connected component of v. In the above example, we process vertices in order 0, 3, 4, 2, 1 (One by one popped from stack). 


//  Time Complexity: O(V+E).
//  Auxiliary Space: O(V).  
// finds reverse of the graph and again calls DFS. DFS takes O(V+E) for a graph represented using adjacency list. Reversing a graph also takes O(V+E) time. 
// For reversing the graph, we simple traverse all adjacency lists. T

#include<bits/stdc++.h>
using namespace std;

void DFS(int i, vector<int>adj[], vector<int>&vis){
    
    vis[i] = 1;
    for(auto x: adj[i]){     // O(E)
        if(!vis[x]){    
            DFS(x,adj,vis);
        }
    }
     
}
void TopoSort(int i, vector<int>adj[], vector<int>&vis, stack<int>&st){
    
    vis[i] = 1;
    for(auto x: adj[i]){                // O(V+E)
        if(!vis[x]){
            TopoSort(x,adj,vis,st);
        }
    }
    
    st.push(i);
}

int kosaraju(int V, vector<int> adj[])
{
    vector<int>vis(V+1,0);

    stack<int>st;
    for(int i=0;i<V;i++){                
        if(!vis[i])
          TopoSort(i,adj,vis,st);
    }
      int cnt=0;   //for  counting  strongly connected components
   
    //  Making reversea Adjacenct List 
    vector<int>revadj[V+1];
    for(int i=0;i<V;i++){                   // O(V+E)
        for(auto child: adj[i]){
            revadj[child].push_back(i);
        }
    }
    vis.clear();       // make sure first clear visited array then resize it 
    vis.resize(V+1,0); // initialization once it is done you can't change the size of the array
    
   // Calling BFS in Toposort order
    while(!st.empty()){
        int key = st.top();
        st.pop();
        
        if(!vis[key]){
          cnt++;
          DFS(key,revadj,vis);
        }
    }
    
    return cnt;
}



int main() {
    
    int v,e;cin>>v>>e;
    vector<int>adj[v+1];
    for(int i=0;i<e;i++){         // O(E)  
        int u,v;cin>>u>>v;
    
        adj[u].push_back(v);
        
    }
    
    cout<<kosaraju(v,adj);

    return 0;

}
// Input:
// 5 5
// 1 0           1 ----> 0 ----> 3
// 0 2           ^       |       |
// 2 1            \      |       |
// 0 3             \     |       |
// 3 4              \    |       |
// output:           \   |       |
// 1 2 3 4 5          \  ▼       |
//                      2        4
// There are 3 Connected Components in above graph
// {0,1,2}, {3}, {4}   




