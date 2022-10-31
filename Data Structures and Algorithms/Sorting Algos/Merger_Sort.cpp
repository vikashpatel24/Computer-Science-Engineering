#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int s,int m,int e){
	int n1=m-s+1;
	int n2=e-m;
  int l[n1],r[n2];

  for(int i=0;i<n1;i++)
  	l[i]=a[s+i];
  for(int i=0;i<n2;i++)
  	r[i]=a[m+1+i];

 int i=0,j=0,k=s;

   while(i<n1&&j<n2){

    if(l[i]>=r[j])
        a[k++]=r[j++];
    else
    	a[k++]=l[i++]; 
   // cout<<a[i]<<"("<<k<<") ";
   
  }

  while(i<n1){
  	a[k++]=l[i++];
  	//  cout<<a[i]<<" ";
  }

  while(j<n2){
  	a[k++]=r[j++];
  	  //cout<<a[i]<<" ";
  }
}
 
void Mergesort(int a[],int s,int e ){
  
	if(s>=e)
		return ;
	int m=(s+e)/2;
	
	Mergesort(a,s,m);
	Mergesort(a,m+1,e);
	Merge(a,s,m,e);

}
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

    Mergesort(a,0,n-1);

for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
	return 0;
}