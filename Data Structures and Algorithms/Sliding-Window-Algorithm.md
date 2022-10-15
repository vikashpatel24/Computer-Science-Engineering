## Sliding Window Algorithm  
The use of Sliding Window technique can be done in a very specific scenario, where the size of window for computation is fixed throughout the complete nested loop. Only then the time complexity can be reduced.  
How to use:  
Take an arbitrary subarray of the input array  
Check if the subarray satisfies the question requirement  
Expand or decrease the size or location of the subarray until the requirement is satisfied  

We call it a sliding window since our subarray is essentially sliding along the input array, revealing only a subsection of the input array at any given time.

# Problem 1: Maximum Sum of Subarray  
Statement: Given an array, and a size k, return the maximum sum of k contiguous elements.  
Input: int [] array = {4,2,1,7,8,1,2,8,1,0}; int k = 3  
Output: 16  
Function:  
~~~
 public int maxSumOfSubarray(int [] arr, int k) {
      int max = Integer.MIN_VALUE;
      int runningSum = 0;

      for (int i = 0; i < arr.length ; i++) {
         runningSum += arr[i];

         if (i >= k - 1) {
            max = Math.max(runningSum, max);
            runningSum -= arr[i - (k - 1)];
         }
      }
      return max;
   }
   ~~~  
   
   # Problem 2: Smallest Subarray with Sum K  
   Statement:Given an array of n positive integers and a positive integer s, find the minimal length of a contiguous subarray of which the sum ≥ s.If there isn’t one, return 0 instead.  
   Input: k = 7, array = [2,3,1,2,4,3]  
   Output: 2  
   Function:  
   ~~~  
   public int smallestSubarrayWithSumK(int [] array, int k) {
      int windowStart = 0;
      int minWindowSize = Integer.MAX_VALUE;
      int runningWindowSum = 0;

      for (int windowEnd = 0; windowEnd < array.length; windowEnd++) {
         runningWindowSum += array[windowEnd];

         while (runningWindowSum >= k) {
            if (runningWindowSum == k) {
               minWindowSize = Math.min(minWindowSize, windowEnd - windowStart + 1);
            }
            runningWindowSum -= array[windowStart];
            windowStart++;
         }

      }
      return minWindowSize;
   }
   ~~~  
   
