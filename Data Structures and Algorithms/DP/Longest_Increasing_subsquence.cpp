<h1>Longest Common Subsequence</h1>

<h2>Problem: </h2>
Given an integer array nums, return the length of the longest strictly increasing subsequence. For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].

<h2>Algorithm: </h2>
Input  : arr[] = {3, 10, 2, 11}
LIS[] = {1, 1, 1, 1} (initially)
Iteration-wise simulation : 

1. arr[2] > arr[1] {LIS[2] = max(LIS [2], LIS[1]+1)=2}
2. arr[3] < arr[1] {No change}
3. arr[3] < arr[2] {No change}
4. arr[4] > arr[1] {LIS[4] = max(LIS [4], LIS[1]+1)=2}
5. arr[4] > arr[2] {LIS[4] = max(LIS [4], LIS[2]+1)=3}
6. arr[4] > arr[3] {LIS[4] = max(LIS [4], LIS[3]+1)=3}

<h2>Implementation in C++: </h2>

```
#include<bits/stdc++.h>
using namespace std;

int LIS(int *a,int n){
    int list[n];
    int mx=-1;
    vector<int>v;
    fill_n(list,n,1);

    for(int i=1;i<n;i++){
        for(int j=0;j<=i-1;j++){

            if(a[i]>a[j]){
                 list[i]=max(list[j]+1,list[i]); 

                       if(mx<list[i])
                         mx=list[i];
                         
            }
        }
    }
    
    return mx;
}

int main(){

    int n = 6;
    int a[n] = {4,6,5,3,7,8};
    
    cout<<"Length of Longest increasing Substring: "<<LIS(a,n);

    return 0;
}

```


