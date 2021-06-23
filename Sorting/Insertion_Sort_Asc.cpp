/*
Given an array A[], of size N containing positive integers. You need to print the elements of array in increasing order.

Worst complexity: O(n^2)
Average complexity: O(n^2)
Best complexity: O(n)
Space complexity: O(1)

*/

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void insertionSort(int a[],int n){
	for(int i = 1;i < n;i++){
		int j = i-1;
		int temp = a[i];
		while(a[j] > temp){
			a[j + 1] = a[j];
			j--;
		}
		a[++j] = temp;
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

		insertionSort(a,n);
		printArray(a,n);
	}
	return 0;
}
