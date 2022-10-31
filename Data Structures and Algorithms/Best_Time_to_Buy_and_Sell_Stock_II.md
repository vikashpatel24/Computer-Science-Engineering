<h1>Best Time to Buy and Sell Stock</h1>

<h2>Problem: </h2>
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

<h2>Algorithm: </h2>
Kadane's Algorithm

<h2>Implementation in C++: </h2>

```

##include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    
    int n=prices.size(), mn=prices[0],mx = prices[0] ,mn_ind=0,mx_ind=0;
         
    int s[n];
    s[n-1]=prices[n-1];
    for(int i=n-2;i>=0;i--){
        s[i] = max(prices[i],s[i+1]);

    }
           
    int res=0;
    for(int i=0;i<n;i++){
       res = max(res,s[i]-prices[i]);
    }
    return res;
}

int main(){
	
   int n = 6;
   vector<int> price = {7,1,5,3,6,4};
   cout<<"Maximum Profit: "<<maxProfit(price);
    
}

```


