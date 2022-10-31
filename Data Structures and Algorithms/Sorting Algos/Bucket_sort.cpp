#include<bits/stdc++.h>
using namespace std;
// void swp(int &x,int &y){
// int *temp = &x;
//   x= y;
//   y=temp;
// }

int main(){

vector<vector<int>>bucket(10);

int n,m=0;cin>>n;
int a[n],b[n];

for(int i=0;i<n;i++){
cin>>a[i];
cout<<a[i]<<" ";
m=max(m,a[i]);
}

cout<<endl<<"max = "<<m;
int divider=ceil(float(m+1)/10);
cout<<" divider = "<<divider<<endl;

for(int i=0;i<n;i++){
   b[i] = a[i]/divider;
   cout<<b[i]<<" ";
}
cout<<endl;


for(int i=0;i<n;i++){
	bucket[b[i]].push_back(a[i]);

}
// int flag=0,num;
// int *p,q;
// for(int i=0;i<10;i++){
// 	//cout<<i<<" -> ";
// 	for(auto x:bucket[i]){
// 		if(flag==0){
// 			flag=1;
// 			num=x;
// 			p=&x;
// 		}
// 		else
// 		{
// 			q=&x;
//           if(x<num)
//           	swp(&num,&x);
// 		}
		
// 	}
// 	//cout<<endl;
// }


for(int i=0;i<10;i++){
	cout<<i<<" -> ";
	for(auto x:bucket[i]){
		cout<<x<<" ";
	}
	cout<<endl;
}


	return 0;
}