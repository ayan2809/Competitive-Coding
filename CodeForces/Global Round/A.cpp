#include<bits/stdc++.h>
using namespace std;

// 
//int kthSmallest(vector <int> arr, int n, int k) 
//{ 
////cout<<1<<endl;
//	// Insert all elements into the set 
//	sort(arr.begin(),arr.end());
//	//return(arr[n-k-1]);
//	// Traverse set and print k-th element 
//	auto it = arr.end(); 
//	for (int i = 0; i < k ; i++) 
//		it--; 
//	return *it; 
//} 

//int findKthLargest(vector<int> const &A, int k)
//{
//    // create a min-heap using `std::priority_queue` and insert
//    // the first `k` array elements into the heap
//    // `std::greater` is used as the comparison function for min-heap
//    priority_queue<int, vector<int>, greater>> pq(A.begin(), A.begin() + k);
// 
//    // do for remaining array elements
//    for (int i = k; i < A.size(); i++)
//    {
//        // if the current element is more than the root of the heap
//        if (A[i] > pq.top())
//        {
//            // replace root with the current element
//            pq.pop();
//            pq.push(A[i]);
//        }
//    }
// 
//    // return the root of min-heap
//    return pq.top();
//} 

int swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
 
// Min Heap Class
// arr holds reference to an integer 
// array size indicate the number of
// elements in Min Heap
class MinHeap {
 
    int size;
    int* arr;
 
public:
    // Constructor to initialize the size and arr
    MinHeap(int size, int input[]);
 
    // Min Heapify function, that assumes that
    // 2*i+1 and 2*i+2 are min heap and fix the
    // heap property for i.
    void heapify(int i);
 
    // Build the min heap, by calling heapify
    // for all non-leaf nodes.
    void buildHeap();
};
 
// Constructor to initialize data
// members and creating mean heap
MinHeap::MinHeap(int size, int input[])
{
    // Initializing arr and size
 
    this->size = size;
    this->arr = input;
 
    // Building the Min Heap
    buildHeap();
}
 
// Min Heapify function, that assumes
// 2*i+1 and 2*i+2 are min heap and 
// fix min heap property for i
 
void MinHeap::heapify(int i)
{
    // If Leaf Node, Simply return
    if (i >= size / 2)
        return;
 
    // variable to store the smallest element
    // index out of i, 2*i+1 and 2*i+2
    int smallest;
 
    // Index of left node
    int left = 2 * i + 1;
 
    // Index of right node
    int right = 2 * i + 2;
 
    // Select minimum from left node and 
    // current node i, and store the minimum
    // index in smallest variable
    smallest = arr[left] < arr[i] ? left : i;
 
    // If right child exist, compare and
    // update the smallest variable
    if (right < size)
        smallest = arr[right] < arr[smallest]
                             ? right : smallest;
 
    // If Node i violates the min heap 
    // property, swap  current node i with
    // smallest to fix the min-heap property 
    // and recursively call heapify for node smallest.
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(smallest);
    }
}
 
// Build Min Heap
void MinHeap::buildHeap()
{
    // Calling Heapify for all non leaf nodes
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(i);
    }
}
 
void FirstKelements(int arr[],int size,int k){
    // Creating Min Heap for given
    // array with only k elements
    MinHeap* m = new MinHeap(k, arr);
 
    // Loop For each element in array
    // after the kth element
    for (int i = k; i < size; i++) {
 
        // if current element is smaller 
        // than minimum element, do nothing 
        // and continue to next element
        if (arr[0] > arr[i])
            continue;
 
        // Otherwise Change minimum element to 
        // current element, and call heapify to
        // restore the heap property
        else {
            arr[0] = arr[i];
            m->heapify(0);
        }
    }
    // Now min heap contains k maximum
    // elements, Iterate and print
    //for (int i = 0; i < k; i++) {
        cout << arr[k-1] << endl;
    //}
}



int main()
{
	int n=0,q=0;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(q--)
	{
		int x=0,k=0;
		cin>>x>>k;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		if(x==1)
		{
			a[k-1]=1-a[k-1];
		}
		else if(x==2)
		{
			FirstKelements(a,n,k);
		}
	}
}
