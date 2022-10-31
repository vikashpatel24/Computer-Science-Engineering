#include<bits/stdc++.h>
using namespace std;

int parent[1000000];
int rnk[1000000]={0};

int find(int x){
  if(parent[x]!=x)
    parent[x]=find(parent[x]);

  return parent[x];
}

void Union(int x,int y){

int  x_rep=find(x);
int  y_rep=find(y);

if(rnk[x_rep]<rnk[y_rep])
      parent[x_rep]=y_rep;
else if(rnk[x_rep]>rnk[y_rep])
      parent[y_rep]=x_rep;
else{
         parent[x_rep]=y_rep;
         rnk[y_rep]++;
    }
}

int main(){
  int a,b;
 int v,e;
 cin>>v>>e;

for(int i=1;i<=v;i++)
  parent[i]=i;

for(int i=0;i<e;i++){
  cin>>a>>b;
  Union(a,b);
}

if(find(4)==find(1))
  cout<<"They belongs to same group";
else
  cout<<"They are not Connected";


cout<<endl<<"Tota no. of Required Edges to connect graph"<<endl;
vector<int>s;
for(int i=1;i<=v;i++){
 if(parent[i]==i){
  s.push_back(i);
///cout<<parent[i]<<"("<<i<<")"<<" ";
}

}
cout<<s.size()-1<<endl;
if(s.size()>1)
{
  for(int i=1;i<s.size();i++){
    cout<<s[0]<<" "<<s[i]<<endl;
  }
}
else
  cout<<"No edge is needed to connect graph";

return 0;
  }
