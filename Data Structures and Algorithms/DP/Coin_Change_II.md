<h1>Coin Change II</h1>

<h2>Problem: </h2>
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.

 
<h2>Algorithm: </h2>
Dynamic Programming - Bottom Approach

<h2>Implementation in C++: </h2>

```
#include<bits/stdc++.h>
using namespace std;

int change(int amount, vector<int>& coins) {
        
    int dp[amount+1];
    int m = coins.size();
    memset(dp,0,sizeof dp);
    
    dp[0] = 1;
 
	for(int j=0;j<coins.size();j++){
	    for(int i=1;i<=amount;i++){
	      
            if(i-coins[j]>=0)
            dp[i] += dp[i-coins[j]];
	     }
	       
	}
    
    return dp[amount];
}

int main(){
	
   vector<int>coins = {1,2,5};
   int amount = 5;
   
   cout<<"Number of Combinations: "<<change(amount, coins);
}

```


