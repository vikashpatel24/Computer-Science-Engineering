## Sliding Window Algorithm  
The use of Sliding Window technique can be done in a very specific scenario, where the size of window for computation is fixed throughout the complete nested loop.  
Only then the time complexity can be reduced.  
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
   
   # Problem 3: Median of sliding window in an array  
   Statement: Given an array of integer arr[] and an integer k, 
   the task is to find the median of each window of size k starting from the left and moving towards the right by one position each time.
   Input1: arr[] = {-1, 5, 13, 8, 2, 3, 3, 1}, k = 3  
   Output: 5 8 8 3 3 3  
   Input2: arr[] = {-1, 5, 13, 8, 2, 3, 3, 1}, k = 4  
   Output: 6.5 6.5 5.5 3.0 2.5  
   // Java implementation of the approach
   ~~~
import java.util.TreeSet;
  
public class GFG {
  
    // Pair class for the value and its index
    static class Pair implements Comparable<Pair> {
        private int value, index;
  
        // Constructor
        public Pair(int v, int p)
        {
            value = v;
            index = p;
        }
  
        // This method will be used by the treeset to
        // search a value by index and setting the tree
        // nodes (left or right)
 
        public int compareTo(Pair o)
        {
  
            // Two nodes are equal only when
            // their indices are same
            if (index == o.index) {
                return 0;
            }
            else if (value == o.value) {
                return Integer.compare(index, o.index);
            }
            else {
                return Integer.compare(value, o.value);
            }
        }
  
        // Function to return the value
        // of the current object
        public int value()
        {
            return value;
        }
  
        // Update the value and the position
        // for the same object to save space
        public void renew(int v, int p)
        {
            value = v;
            index = p;
        }
  
     
        public String toString()
        {
            return String.format("(%d, %d)", value, index);
        }
    }
  
    // Function to print the median for the current window
    static void printMedian(TreeSet<Pair> minSet,
                            TreeSet<Pair> maxSet, int window)
    {
  
        // If the window size is even then the
        // median will be the average of the
        // two middle elements
        if (window % 2 == 0) {
            System.out.print((minSet.last().value()
                              + maxSet.first().value())
                             / 2.0);
            System.out.print(" ");
        }
  
        // Else it will be the middle element
        else {
            System.out.print(minSet.size() > maxSet.size()
                                 ? minSet.last().value()
                                 : maxSet.first().value());
            System.out.print(" ");
        }
    }
  
    // Function to find the median
    // of every window of size k
    static void findMedian(int arr[], int k)
    {
        TreeSet<Pair> minSet = new TreeSet<>();
        TreeSet<Pair> maxSet = new TreeSet<>();
  
        // To hold the pairs, we will keep renewing
        // these instead of creating the new pairs
        Pair[] windowPairs = new Pair[k];
  
        for (int i = 0; i < k; i++) {
            windowPairs[i] = new Pair(arr[i], i);
        }
  
        // Add k/2 items to maxSet
        for (int i = 0; i < k / 2; i++) {
            maxSet.add(windowPairs[i]);
        }
  
        for (int i = k / 2; i < k; i++) {
  
            // Below logic is to maintain the
            // maxSet and the minSet criteria
            if (arr[i] < maxSet.first().value()) {
                minSet.add(windowPairs[i]);
            }
            else {
                minSet.add(maxSet.pollFirst());
                maxSet.add(windowPairs[i]);
            }
        }
  
        printMedian(minSet, maxSet, k);
  
        for (int i = k; i < arr.length; i++) {
  
            // Get the pair at the start of the window, this
            // will reset to 0 at every k, 2k, 3k, ...
            Pair temp = windowPairs[i % k];
            if (temp.value() <= minSet.last().value()) {
  
                // Remove the starting pair of the window
                minSet.remove(temp);
  
                // Renew window start to new window end
                temp.renew(arr[i], i);
  
                // Below logic is to maintain the
                // maxSet and the minSet criteria
                if (temp.value() < maxSet.first().value()) {
                    minSet.add(temp);
                }
                else {
                    minSet.add(maxSet.pollFirst());
                    maxSet.add(temp);
                }
            }
            else {
                maxSet.remove(temp);
                temp.renew(arr[i], i);
  
                // Below logic is to maintain the
                // maxSet and the minSet criteria
                if (temp.value() > minSet.last().value()) {
                    maxSet.add(temp);
                }
                else {
                    maxSet.add(minSet.pollLast());
                    minSet.add(temp);
                }
            }
  
            printMedian(minSet, maxSet, k);
        }
    }
  
    // Driver code
    public static void main(String[] args)
    {
        int[] arr = new int[] { 0, 9, 1, 8, 2,
                                7, 3, 6, 4, 5 };
        int k = 3;
  
        findMedian(arr, k);
    }
}
 ~~~
   
