/*
Sort an array of 0s, 1s and 2s
Difficulty Level : Medium
TC -> O(N)
SC -> O(1)
*/


#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
 
    while (mid <= hi) {
        if(a[mid] == 0)
            swap(a[lo++], a[mid++]);
        else if(a[mid] == 1)
            mid++;
        else
            swap(a[mid], a[hi--]);
    }
  return;
}
 

int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort012(arr, n);
    for(int i = 0;i < n;i++) 
      cout << arr[i] << " ";
  
    return 0;
}
