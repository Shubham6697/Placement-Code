/*
Move all negative numbers to beginning and positive to end with constant extra space
TC -> O(N)
SC -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n = sizeof(a)/sizeof(a[0]),curr_pos = 0;
	
	for(int i = 0;i<n;i++){
	    if(a[i]>=0){
	        if(i != curr_pos){
	            swap(a[i],a[curr_pos]);
	            curr_pos++;
	        }    
	    }
	}
  
	for(int i = 0;i<n;i++)
	    cout<<a[i]<<"  ";
	return 0;
}
