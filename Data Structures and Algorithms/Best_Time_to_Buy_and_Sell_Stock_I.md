<h1>Best Time to Buy and Sell Stock</h1>

<h2>Problem: </h2>
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

Find and return the maximum profit you can achieve.

<h2>Algorithm: </h2>
Greedy Approach

<h2>Implementation in C++: </h2>

```
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    
    int n = prices.size(),mxprofit=0;
    for(int i=1;i<n;i++){
        
        if(prices[i]-prices[i-1]>0){
            mxprofit += prices[i]-prices[i-1];
          
        }
    }
    return mxprofit;
}

int main(){
	
   int n = 6;
   vector<int> price = {7,1,5,3,6,4};
   cout<<"Maximum Profit: "<<maxProfit(price);
    
}

```


