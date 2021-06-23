/*
Given an array A[], size N containing positive integers. You need to arrange the elements of array in increasing order.
Worst complexity: n^2
Average complexity: n^2
Best complexity: n^2
Space complexity: 1


*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void selectionSort(int a[],int n){
	int minIdx;
	for(int i = 0;i < n;i++){
		minIdx = i;
		for(int j = i;j < n;j++){
			minIdx = (a[minIdx] > a[j]) ? j : minIdx;
		}
		swap(a[minIdx],a[i]);
	}
	return;
}

void printArray(int a[],int n){
	for(int i = 0;i < n;i++)	cout << a[i] << " ";

	cout << "\n";

	return;
}

int main() {

	// Your code here
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++)	cin >> a[i];

		selectionSort(a,n);
		printArray(a,n);
	}
	return 0;
}
