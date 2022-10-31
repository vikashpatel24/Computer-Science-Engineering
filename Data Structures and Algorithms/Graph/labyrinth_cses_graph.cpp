#include <bits/stdc++.h>
#define ll long long int
#define f first
#define s second
#define pii pair<int,int>
#define pic pair<int,char>
using namespace std;

int main(){

   int n,m;cin>>n>>m;
   vector<vector<char>>grid(n+1,vector<char>(m+1));
   vector<vector<int>>vis(n+1,vector<int>(m+1,0));

   int stx,sty;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>grid[i][j];
      if(grid[i][j]=='A')
        stx = i, sty = j;
    }
   }
   
  int dx[] = {1,-1,0,0};
  int dy[] = {0,0,-1,1};
  vector<char>s = {'D','U','L','R'};
  
  unordered_map<int,pic>mp;
  queue<pii>q;   // int,int
  q.push({stx,sty});
  vis[stx][sty] = 1;
  int ans = -1,a = stx * m + sty;
  while(!q.empty()){

    int i = q.front().f, j = q.front().s;
    q.pop();
    // cout<<i<<" "<<j<<endl;


    for(int k=0;k<4;k++){
        int nx = i + dx[k], ny = j + dy[k];
        if(nx>=0 && nx<n && ny>=0 && ny<m && !vis[nx][ny]){
            vis[nx][ny] = 1;
            if(grid[nx][ny]=='.'){
                
                // str += s[k];    // why not??
                mp[nx*m+ny] = {i*m+j, s[k]};
                q.push({nx,ny});
            }
            else if(grid[nx][ny]=='B'){
                mp[nx*m+ny] = {i*m+j, s[k]};
                ans = nx*m+ny;
                break;
            }
        }
    }

  }

   // solve(stx,sty,grid,vis,"");
  
   if(ans==-1)
       cout<<"NO\n";
   else{
       string str;
       while(ans!=a){
          str += mp[ans].s;
          ans = mp[ans].f;
       }
       cout<<"YES\n"<<str.size()<<endl;
       reverse(str.begin(),str.end());
       cout<<str;
   }

    
}

