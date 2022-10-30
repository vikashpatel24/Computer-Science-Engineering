#include <iostream>
using namespace std;
int main()
{
    int n;int MaxSumSubarray(int a[], int n);
    int maximum_sum;
    cout << "enter size of array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maximum_sum = MaxSumSubarray(a, n);
    cout << maximum_sum;
}
int MaxSumSubarray(int a[], int n)
{                         //example [5,-4,-2,6,-1]
    int current_sum = 0;
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += a[i];
         if (current_sum > max_sum)   
        {
            max_sum = current_sum;
        }
        if (current_sum < 0)           
        {
            current_sum = 0;
        }
    }
    return max_sum;
}
