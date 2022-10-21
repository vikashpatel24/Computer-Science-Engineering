# Scheduling Algorithm

There are various algorithms which are used by the Operating System to schedule the processes on the processor in an efficient way.

# The Purpose of a Scheduling algorithm

- Maximum CPU utilization
- Fare allocation of CPU
- Maximum throughput
- Minimum turnaround time
- Minimum waiting time
- Minimum response time

Here we will talk about Shortest Job First Scheduling Algorithm.

# Shortest Job First

The job with the shortest burst time will get the CPU first. The lesser the burst time,
the sooner will the process get the CPU. It is the non-preemptive type of scheduling.

# Algorithm:

- Sort all the processes according to the arrival time.
- Then select that process that has minimum arrival time and minimum Burst time.
- After completion of the process make a pool of processes that arrives afterward
  till the completion of the previous process and select that process among the pool
  which is having minimum Burst time.

![Alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200303163658/SJF.jpg)

# Implementation in CPP

```cpp
#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int left[], int leftCount, int right[], int rightCount)
{
int i = 0, j = 0, k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (left[i] < right[j])
        a[k++] = left[i++];
        else
        a[k++] = right[j++];
    }

    while (i < leftCount)
    a[k++] = left[i++];
    while (j < rightCount)
    a[k++] = right[j++];

}

void mergeSort(int a[], int n)
{

    int middle = n / 2;
    int *left, *right;
    if (n < 2)
    return;
    left = new int[middle];
    right = new int[n - middle];
    for (int i = 0; i < middle; i++)
    left[i] = a[i];
    for (int i = middle; i < n; i++)
    right[i - middle] = a[i];
    mergeSort(left, middle);
    mergeSort(right, n - middle);
    merge(a, left, middle, right, n - middle);
    delete left;
    delete right;

}

int main(int argc, char const \*argv[])
{

    ios_base::sync_with_stdio(false);
    int n;
    cout << "Enter the number of processes";
    cin >> n;
    int bt[n], wt[n] = {0}, tat[n], total = 0;
    float avg_wt, avg_tat;
    for (int i = 0; i < n; i++)
    {
    cout << "Enter the burst time for process " << i + 1 << ":";
    cin >> bt[i];
    }
    mergeSort(bt, n);
    for (int i = 1; i < n; i++)
    {
    for (int j = 0; j < i; j++)
    {
    wt[i] += bt[j];
    }
    total += wt[i];
    }
    avg_wt = (float)total / n;
    total = 0;
    for (int i = 0; i < n; i++)
    {
    tat[i] = wt[i] + bt[i];
    total += tat[i];
    }
    avg_tat = (float)total / n;
    cout << "Average waiting time is " << avg_wt << "\n";
    cout << "Average turnaround time is " << avg_tat << "\n";
    return 0;

}
```
