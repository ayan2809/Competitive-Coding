#include <bits/stdc++.h>
using namespace std;
#define ll long long


void printArray(vector<int> arr, int n,int k) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
// Recursive function to print all 
// possible subsequences for given array 
void printSubsequences(vector<int> arr, int index,  
                       vector<int> subarr) 
{ 
    // Print the subsequence when reach 
    // the leaf of recursion tree 
    if (index == arr.size()) 
    { 
        int l = subarr.size(); 
  
        // Condition to avoid printing 
        // empty subsequence 
        if (l != 0) 
            printArray(subarr, l); 
    } 
    else
    { 
        // Subsequence without including 
        // the element at current index 
        printSubsequences(arr, index + 1, subarr); 
  
        subarr.push_back(arr[index]); 
  
        // Subsequence including the element 
        // at current index 
        printSubsequences(arr, index + 1, subarr); 
    } 
    return; 
} 

// Function which returns the numbe of
// unique subsequences of length K
int solution(vector<int>& A, int k)
{
	// seiz of the vector
	// which does is constant
	const int N = A.size();

	// bases cases
	if (N < k || N < 1 || k < 1)
		return 0;
	if (N == k)
		return 1;

	// Prepare arrays for recursion
	vector<int> v1(N, 0);
	vector<int> v2(N, 0);
	vector<int> v3(N, 0);

	// initiate separately for k = 1
	// intiate the last element
	v2[N - 1] = 1;
	v3[A[N - 1] - 1] = 1;

	// initiate all other elements of k = 1
	for (int i = N - 2; i >= 0; i--) {

		// initialize the front element
		// to vector v2
		v2[i] = v2[i + 1];

		// if element v[a[i]-1] is 0
		// then increment it in vector v2
		if (v3[A[i] - 1] == 0) {
			v2[i]++;
			v3[A[i] - 1] = 1;
		}
	}

	// iterate for all possible values of K
	for (int j = 1; j < k; j++) {

		// fill the vectors with 0
		fill(v3.begin(), v3.end(), 0);

		// fill(v1.begin(), v1.end(), 0)
		// the last must be 0 as from last no unique
		// subarray can be formed
		v1[N - 1] = 0;

		// Iterate for all index from which unique
		// subsequences can be formed
		for (int i = N - 2; i >= 0; i--) {

			// add the number of subsequence formed
			// from the next index
			v1[i] = v1[i + 1];

			// start with combinations on the
			// next index
			v1[i] = v1[i] + v2[i + 1];

			// Remove the elements which have
			// already been counted
			v1[i] = v1[i] - v3[A[i] - 1];

			// Update the number used
			v3[A[i] - 1] = v2[i + 1];
		}

		// prepare the next iteration
		// by filling v2 in v1
		v2 = v1;
	}

	// last answer is stored in v2
	return v2[0];
}

// Function to push the vector into an array
// and print all the unique subarrays
void solve(int a[], int n, int k)
{
	vector<int> v;

	// fill the vector with a[]
	v.assign(a, a + n);

	// Function call to print the count
	// of unique susequences of size K
	cout << solution(v, k)<<endl;
}

// Driver Code
int main()
{
	ll n=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector <int> b;
	printSubsequences(a, 0, b); 
	int q=0;
	cin>>q;
	while(q--)
	{
		int m=0;
		cin>>m;
		solve(a, n, m);
	}
//	int a[] = { 1, 2, 3, 4 };
//	int n = sizeof(a) / sizeof(a[0]);
	//int k = 3;
	//solve(a, n, k);

	return 0;
}

