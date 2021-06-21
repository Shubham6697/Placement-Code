/*
K-th Smallest Element in an Unsorted Array using Priority Queue.
TC -> O(N LogK)
Auxiliary Space: O(K), since the priority queue ay any time holds at max k elements.

*/



int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq; //max heap
        
        for(int i = l;i <= r;i++){
            pq.push(arr[i]);
            
            if (pq.size() > k) 
                pq.pop();
        }
    
        return pq.top();
    }

int main()
{

    int arr[] = { 5, 20, 10, 7, 1 };
 
    int N = sizeof(arr)/sizeof(arr[0]);

    int K = 2;

    cout << kthSmallest(arr, N, K);
 
    return 0;
}
