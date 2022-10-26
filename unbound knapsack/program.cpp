/* A Naive recursive implementation of
unbounded Knapsack problem */
#include <bits/stdc++.h>
using namespace std;

// Returns the maximum value that
// can be put in a knapsack of capacity W
int unboundedKnapsack(int W, int wt[], int val[], int idx)
{

	// Base Case
	// if we are at idx 0.
	if (idx == 0) {
		return (W / wt[0]) * val[0];
	}
	// There are two cases either take element or not take.
	// If not take then
	int notTake
		= 0 + unboundedKnapsack(W, wt, val, idx - 1);
	// if take then weight = W-wt[idx] and index will remain
	// same.
	int take = INT_MIN;
	if (wt[idx] <= W) {
		take = val[idx]
			+ unboundedKnapsack(W - wt[idx], wt, val,
								idx);
	}
	return max(take, notTake);
}

// Driver code
int main()
{
	int W = 100;
	int val[] = { 10, 30, 20 };
	int wt[] = { 5, 10, 15 };
	int n = sizeof(val) / sizeof(val[0]);

	cout << unboundedKnapsack(W, wt, val, n - 1);
	return 0;
}
// This code is contributed by Sanskar.
