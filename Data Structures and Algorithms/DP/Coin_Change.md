<h1>Coin Change</h1>

<h2>Problem: </h2>
You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

<h2>Algorithm: </h2>
Dynamic Programming - Bottom Approach

<h2>Implementation in C++: </h2>

```
#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    
    if(amount==0)return 0;
    sort(coins.begin(), coins.end());
    int n = coins.size();
    vector<int>prev(amount+1,1e4), curr(amount+1,1e4);

    for(int i=1;i<=n;i++){
        curr[0] = 0;
        for(int j=1;j<=amount;j++){
            
            curr[j] = prev[j];
            if(j-coins[i-1]>=0)
            curr[j] = min(curr[j],1 + curr[j-coins[i-1]]);
        }
        prev = curr;

    }
    return curr[amount]== 1e4 ? -1 : curr[amount];
}

int main(){
	
   vector<int>coins = {1,2,5};
   int amount = 11;
   
   cout<<"Fewest Nunber of coins required: "<<coinChange(coins, amount);
}

```


