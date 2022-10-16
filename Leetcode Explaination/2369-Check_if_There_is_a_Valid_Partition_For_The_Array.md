2369. Check if There is a Valid Partition For The Array

Problem Statement:-
You are given a 0-indexed integer array nums. You have to partition the array into one or more contiguous subarrays.

We call a partition of the array valid if each of the obtained subarrays satisfies one of the following conditions:

	1. The subarray consists of exactly 2 equal elements. For example, the subarray [2,2] is good.
	2. The subarray consists of exactly 3 equal elements. For example, the subarray [4,4,4] is good.
	3. The subarray consists of exactly 3 consecutive increasing elements, that is, the difference between adjacent elements is 1. For example, the subarray [3,4,5] is good, but the subarray [1,3,5] is not.

Return true if the array has at least one valid partition. Otherwise, return false.

eg. 1:
Input: nums = [4,4,4,5,6]
Output: true
Explanation: The array can be partitioned into the subarrays [4,4] and [4,5,6].
This partition is valid, so we return true.

eg. 2:
Input: nums = [1,1,1,2]
Output: false
Explanation: There is no valid partition for this array.


Explaination:-

So, the question is to check whether we can partition the given array into some partitions following certain conditions.

	1. subarray of two equal elements eg, [2,2]
	2. subarray of three equal elements eg. [3,3,3]
	3. subarray of three conscecutive increasing elements. eg. [1,2,3] or [4,5,6]

So, like most of dynamic programming problems one should think whether it is possible to partition elements to some index, based on that we can check for the whole array.

It is to be noted that at any index any of above three condtions can be applied.
We define an dp array which tell whether it is possible to partition till that index.
ie. dp[idx] = 1 or 0

Here in my solution I am checking from the end of array whether it is possible or not.
So, base condition will be if our index goes to -1, as it is 0 based indexing.

Below is the commented code for your reference.


'''
class Solution {
public:
    
	// checking for cond1 if two adjacent elements are equal
    bool cond1(int idx, vector<int> &nums){
        return idx >= 1 && (nums[idx] == nums[idx - 1]);
    }
	
    // checking for cond2 if three adjacent elements are equal
    bool cond2(int idx, vector<int> &nums){
        return idx >= 2 && (nums[idx] == nums[idx - 1] && nums[idx - 1] == nums[idx - 2]);
    }
    
	// checking for cond3 if three adjacent elements are consecutive increasing
    bool cond3(int idx, vector<int> &nums){
        return idx >= 2 && ((nums[idx] - nums[idx - 1]) == 1) && ((nums[idx - 1] - nums[idx - 2]) == 1);
    }
    
    bool check(int idx, vector<int> &nums, vector<int> &dp){
        
		// base condition have reached to -1 index than it is possible to partition
        if((idx + 1) == 0) return true;
        
		// if we have already find answer of present index just return it
        if(dp[idx] != -1) return dp[idx];
		
		// this tells whether it is possible to partition or not
        bool ok = false;
        
		// check for all three conditions if any of them returns true ok will be true
        if(cond1(idx, nums)) ok |= check(idx - 2, nums, dp);
        if(cond2(idx, nums)) ok |= check(idx - 3, nums, dp);
        if(cond3(idx, nums)) ok |= check(idx - 3, nums, dp);
        
		// memoization step we are storing answer of present index so that we do not calculate again
        return dp[idx] = ok;
    }
    
    bool validPartition(vector<int>& nums) {
        
        int n = nums.size();
        
		// dp array is initialised by -1 which denotes answer is not obtained by any of indexes
        vector<int> dp(n + 1, -1);
		
		// we are checking from the end of array 
        return check(n - 1, nums, dp);
    }
};
'''

Time Complexity :- O(n) as we are traversing array only once
Space Complexity :- O(n) we are using extra dp array

