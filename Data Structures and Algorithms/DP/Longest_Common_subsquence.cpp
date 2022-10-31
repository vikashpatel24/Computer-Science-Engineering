<h1>Longest Common Subsequence</h1>

<h2>Problem: </h2>
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

<h2>Algorithm: </h2>
Bottom-up DP utilizes a matrix m where we track LCS sizes for each combination of i and j.

If a[i] == b[j], LCS for i and j would be 1 plus LCS till the i-1 and j-1 indexes.
Otherwise, we will take the largest LCS if we skip a charracter from one of the string (max(dp[i - 1][j], dp[i][j - 1]).

<h2>Implementation in C++: </h2>

```

#include<bits/stdc++.h>
using namespace std;
int dp[100][100]={0};

int res;
int LCS(string a,string b){


	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=b.size();j++){
			if(a[i-1]==b[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

			res=dp[i][j];
		}
	}
    	return res;     
	// if(a.empty()||b.empty())
	// 	return 0;
		

	// if(a[0]==b[0])
	//     return 1+LIS(a.substr(1),b.substr(1));
 //    else
	//     return max(LIS(a.substr(1),b),LIS(a,b.substr(1)));

     
}

int main(){

	string a,b;
	cin>>a>>b;

    cout<< LCS(a,b);

     for(int i=0;i<=a.size();i++){
     	for(int j=0;j<=b.size();j++){
     		cout<<dp[i][j]<<" ";
     	}
     	cout<<endl;
     }



	return 0;
}

```


