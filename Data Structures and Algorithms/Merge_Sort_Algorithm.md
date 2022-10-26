<h1>Merge Sort Algorithm</h1>

Merge sort is one of the most efficient sorting techniques and it’s based on the “divide and conquer” paradigm.In merge sort, the problem is divided into two subproblems in every iteration.Hence efficiency is increased drastically.
It follows the divide and conquer approach.Divide break the problem into 2 subproblem which continues until the problem set is left with one element only.Conquer basically merges the 2 sorted arrays into the original array.

<h2>Pseudocode for MergeSort </h2>

1. Declare left and right var which will mark the extreme indices of the array<br>
2. Left will be assigned to 0 and right will be assigned to n-1<br>
3. Find mid = (left+right)/2<br>
4. Call mergeSort on (left,mid) and (mid+1,rear)<br>
5. Above will continue till left<right<br>
6. Then we will call merge on the 2 subproblems<br>

<h2>Merge sort Algorithm</h2>

```
MergeSort(arr, left, right):
    if left > right 
        return
    mid = (left+right)/2
    mergeSort(arr, left, mid)
    mergeSort(arr, mid+1, right)
    merge(arr, left, mid, right)
end
```

![111](https://user-images.githubusercontent.com/57640212/198103421-b6bd09e8-ce2a-4291-aaca-595d4a79c481.png)


<h2>Time Complexity of Merge sort</h2>

In the worst case, in every iteration, we are dividing the problem into further 2 subproblems. Hence this will perform log n operations and this has to be done for n iteration resulting in n log n operations total. <br>
In the best case that is sorted array, we can do some modification by using a flag to check whether the lament is already sorted or not<br>
Best Time Complexity: O(nlogn)<br>
Average Time Complexity: O(nlogn)<br>
Worst Time Complexity: O(nlogn)<br>

<h2>Space Complexity of Merge sort</h2>

n auxiliary space is required in Merge Sort implementation as all the elements are copied into an auxiliary array<br>
Hence space complexity is: O(n)<br>

<h2>Merge sort in Java</h2>

```
class MergeSort {

  void merge(int arr[], int left, int mid, int right) {

    int len1 = mid - left + 1;
    int len2 = right - mid;

    int leftArr[] = new int[len1];
    int rightArr[] = new int[len2];

    for (int i = 0; i < len1; i++)
      leftArr[i] = arr[left + i];
    for (int j = 0; j < len2; j++)
      rightArr[j] = arr[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = left;

    while (i < len1 && j < len2) {
      if (leftArr[i] <= rightArr[j]) {
        arr[k] = leftArr[i];
        i++;
      } else {
        arr[k] = rightArr[j];
        j++;
      }
      k++;
    }

    while (i < len1) {
      arr[k] = leftArr[i];
      i++;
      k++;
    }

    while (j < len2) {
      arr[k] = rightArr[j];
      j++;
      k++;
    }
  }

  void mergeSort(int arr[], int start, int right) {
    if (start < right) {

      int mid = (start + right) / 2;

      mergeSort(arr, start, mid);
      mergeSort(arr, mid + 1, right);

      merge(arr, start, mid, right);
    }
  }

  static void display(int arr[]) {
    int n = arr.length;
    for (int i = 0; i < n; ++i)
      System.out.print(arr[i] + " ");
    System.out.println();
  }

  public static void main(String args[]) {
    int arr[] = { 6, 5, 12, 10, 9, 1 };

    MergeSort ob = new MergeSort();
    
    System.out.println("Original array");
    display(arr);    
    
    ob.mergeSort(arr, 0, arr.length - 1);

    System.out.println("Sorted array");
    display(arr);
  }
}
```

```
Output of the program:
 Original array
 6 5 12 10 9 1 
 Sorted array
 1 5 6 9 10 12 
```

<h2>Merge sort in C++</h2>

```
#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
  
  int len1 = mid - start + 1;
  int len2 = end - mid;

  int leftArr[len1], rightArr[len2];

  for (int i = 0; i < len1; i++)
    leftArr[i] = arr[start + i];
  for (int j = 0; j < len2; j++)
    rightArr[j] = arr[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = start;

  while (i < len1 && j < len2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  while (i < len1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < len2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
  }
}

void display(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array \n";
  display(arr, size);  
  
  mergeSort(arr, 0, size - 1);

  cout << "Sorted array \n";
  display(arr, size);
  return 0;
}
```

```
Output of the program:
 Original array 
 6 5 12 10 9 1 
 Sorted array 
 1 5 6 9 10 12
```


<h2>Merge sort in Python</h2>

```
def mergeSort(arr):
    if len(arr) > 1:

        r = len(arr)//2
        leftArr = arr[:r]
        rightArr = arr[r:]

        mergeSort(leftArr)
        mergeSort(rightArr)

        i = j = k = 0

       
        while i < len(leftArr) and j < len(rightArr):
            if leftArr[i] < rightArr[j]:
                arr[k] = leftArr[i]
                i += 1
            else:
                arr[k] = rightArr[j]
                j += 1
            k += 1

       
        while i < len(leftArr):
            arr[k] = leftArr[i]
            i += 1
            k += 1

        while j < len(rightArr):
            arr[k] = rightArr[j]
            j += 1
            k += 1


def display(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == '__main__':
    arr = [6, 5, 12, 10, 9, 1]
    
    print("Original array")
    display(arr)
    
    mergeSort(arr)

    print("Sorted array")
    display(arr)
 
```

```
Output of the program:
 Original array
 6 5 12 10 9 1 
 Sorted array
 1 5 6 9 10 12
```
