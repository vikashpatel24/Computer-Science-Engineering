# ImportantFiles
<h1>Depth First Search Algorithm</h1>
The DFS algorithm is a recursive algorithm that uses the idea of backtracking. It involves exhaustive searches of all the nodes by going ahead, if possible, else by backtracking.Here, the word backtrack means that when you are moving forward and there are no more nodes along the current path, you move backwards on the same path to find nodes to traverse. All the nodes will be visited on the current path till all the unvisited nodes have been traversed after which the next path will be selected.
Applications of DFS are finding connected components, Topological sorting, solving puzzles with only one solution, such as mazes. (DFS can be adapted to find all solutions to a maze by only including nodes on the current path in the visited set.), determining whether a species is closer to one species or another in a phylogenetic tree etc.

<h2>How does DFS algorithm work?</h2>
This recursive nature of DFS can be implemented using stacks. The basic idea is as follows:
Pick a starting node and push all its adjacent nodes into a stack. Pop a node from stack to select the next node to visit and push all its adjacent nodes into a stack.
Repeat this process until the stack is empty. However, ensure that the nodes that are visited are marked. This will prevent you from visiting the same node more than once. If you do not mark the nodes that are visited and you visit the same node more than once, you may end up in an infinite loop.

<h2>Implementation in C++: </h2>

```
#include <bits/stdc++.h>
#define ll long long int
#define f first
#define s second
#define pii pair<int,int>
#define pic pair<int,char>
using namespace std;

// TC = O(V+E);
// SC = O(V+E)     +       O(V)     +    O(V)
//    for adjlist        col array      Auxilery space for recursion

void DFS(int i, int par, vector<int> adj[], vector<int> &vis){

  vis[i] = 1;
  
  cout<<"Visited "<<i<<" ";
  for(auto x: adj[i]){
  	if(!vis[x]){
  		DFS(x,i,adj,vis);
  	}
  }
}

int main(){

  int v,e;cin>>v>>e;

  vector<int>adj[v+1];
  vector<int>vis(v,0);

  for(int i=0;i<e;i++){
    int a,b;cin>>a>>b;
    --a,--b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  for(int i=0;i<v;i++)
    if(!vis[i])
      DFS(i,-1,adj,vis);
    	
 return 0;
}

```
