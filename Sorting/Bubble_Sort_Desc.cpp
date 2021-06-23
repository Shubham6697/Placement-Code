/*
Given an array, sort the array in reverse order by simply swapping its adjacent elements.
T.C - O(N^2)
S.C - O(1)
Worst complexity: n^2
Average complexity: n^2
Best complexity: n
Total number of comparisons in bubble sort is (n - 1) + (n - 2) + (n-3) +(n-4) +(n-5) ….....(2) + (1) = n(n - 1)/2 i.e, n^2
*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void bubbleSort(int a[],int n){
	bool flag = true;
	
	for(int i = n-1;i > 0;i--){
		for(int j = n-1;j >= n - i ;j--){
			if(a[j] > a[j-1]){
				swap(a[j],a[j-1]);
				flag = false;
			}
		}
		if(flag)
			break;
	}
	return;
}

void printArray(int a[],int n){
	for(int i = 0;i < n;i++)	cout << a[i] << " ";

	cout << "\n";
	return;
}
int main() {
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++)	cin >> a[i];
	
	bubbleSort(a,n);
	printArray(a,n);
	
	return 0;
}
