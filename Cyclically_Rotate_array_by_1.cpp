/*
Given an array, rotate the array by one position in clock-wise direction.
Difficulty Level : Basic
TC -> O(N)
SC -> O(1)
*/

# include <iostream>
using namespace std;
 
void rotate(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 1;i < n;i++){
        //swap(temp,arr[i]);
        temp += arr[i];
        arr[i] = temp - arr[i];
        temp = temp - arr[i];
    }
    arr[0] = temp;
    return;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);
 
    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    rotate(arr, n);
 
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << ' ';
 
    return 0;
}
