#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 

vector<int>seg_tree;
vector<int>v;

void build_tree(int st,int en,int node){
	
	if(st==en){
		 seg_tree[node]=v[st];
		 return;
	}
	
	int mid=(st+en)/2;
	
	build_tree(st,mid,2*node+1);
	build_tree(mid+1,en,2*node+2);
	
	seg_tree[node]= min(seg_tree[2*node+1],seg_tree[2*node+2]);

}

void Update(int value,int index,int st,int en,int node){
	
	if(st==en){
		v[index]=value;
		seg_tree[node]=v[st];
		return ;
	}
	
	int mid=(st+en)/2;
	
	Update(value,index,st,mid,2*node+1);
	
	Update(value,index,mid+1,en,2*node+2);
	
	seg_tree[node]= min(seg_tree[2*node+1],seg_tree[2*node+2]);

}

ll query(ll node,ll st,ll en,ll l,ll r){
   
	// l...st....en..r
	if(l<=st and en<=r)
		return seg_tree[node];
	   // r...st...en...l
	else if(r<st || en<l )
		return 1e9;
	
	int mid=(st+en)/2;
	ll left=query(2*node+1,st,mid,l,r);
	ll right=query(2*node+2,mid+1,en,l,r);
		// cout<<left<<" "<<right;
	return min(left,right);
}
int main(){ 
	
   int n;cin>>n;
   seg_tree.resize(4*n);
   v.resize(n);
   for(int i=0;i<n;i++){
          cin>>v[i];
   }
   
   build_tree(0,v.size()-1,0);
   
   int q;cin>>q;
   for(int i=0;i<q;i++){
  	 int l,r;cin>>l>>r;
   cout<<"Minimum from index "<<l<<" to "<<r<<" is : "<<query(0,0,v.size()-1,l,r)<<endl;
}

return 0; 
} 