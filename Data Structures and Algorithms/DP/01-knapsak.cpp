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

    // using recursion....
    // if(n==0||W==0)
	//  return 0;

	// if(wt[n-1]<=W)
	//  return	max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
	// else
	// 	return knapsack(wt,val,W,n-1);

}

int main(){

int n = 5;
int wt[n] = {7,2,4,5,6};
int val[n] = {34,55,62,32,71};
int W = 50;

knapsack(wt,val,W,n);

cout<<"TOTAL PROFIT: "<<dp[n][W];

return 0;

}