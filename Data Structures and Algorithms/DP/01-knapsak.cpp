#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000]={0};

void knapsack(int wt[],int val [],int W,int n){

	for(int i=1;i<=n;i++){
		for(int j=1;j<=W;j++){

			if(wt[i-1]<=j)
				dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
		}
	}

     //using recursion....
   //    if(n==0||W==0)
	   // return 0;

	// if(wt[n-1]<=W)
	//  return	max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
	// else
	// 	return knapsack(wt,val,W,n-1);

}
int main(){

int n;cin>>n;
int wt[n],val[n];
for(int i=0;i<n;i++)
cin>>wt[i];
for(int j=0;j<n;j++)
cin>>val[j];

int W;cin>>W;


knapsack(wt,val,W,n);
for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
}


cout<<endl<<"TOTAL PROFIT "<<dp[n][W];

#ifndef ONLINE_JUDGE
cout<<endl<<"TIME ELAPSED : "<< 1.0*clock()/CLOCKS_PER_SEC;
#endif
	return 0;

}