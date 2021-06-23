/*
Given an array A[], of size N containing positive integers. You need to print the elements of array in increasing order.
Worst complexity: n^2
Average complexity: n^2
Best complexity: n
Space complexity: 1

*/


#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

void bubbleSort(int a[],int n){
	bool flag = true;
	
	for(int i = 0;i < n-1;i++){
		for(int j = 1;j < n-i;j++){
			if(a[j-1] > a[j]){
				swap(a[j-1],a[j]);
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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i < n;i++)	cin >> a[i];
		
		bubbleSort(a,n);
		printArray(a,n);
	}
	return 0;
}
