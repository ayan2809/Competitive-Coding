// CPP program to find three numbers 
// such that sum of two makes the 
// third element in array 
#include <bits/stdc++.h> 
using namespace std; 

// Utility function for finding 
// triplet in array 
bool findTriplet(int arr[], int n) 
{ 
	// sort the array 
	sort(arr, arr + n); 

	// for every element in arr 
	// check if a pair exist(in array) whose 
	// sum is equal to arr element 
	for (int i = n - 1; i >= 0; i--) { 
		int j = 0; 
		int k = i - 1; 

		// Iterate forward and backward to find 
		// the other two elements 
		while (j < k) { 

			// If the two elements sum is 
			// equal to the third element 
			if (arr[i] == arr[j] + arr[k]) { 

				// pair found 
				//cout << "numbers are " << arr[i] << " "
					//<< arr[j] << " " << arr[k] << endl; 
				return true; 
			} 

			// If the element is greater than 
			// sum of both the elements, then try 
			// adding a smaller number to reach the 
			// equality 
			else if (arr[i] > arr[j] + arr[k]) 
				j += 1; 

			// If the element is smaller, then 
			// try with a smaller number 
			// to reach equality, so decrease K 
			else
				k -= 1; 
		} 
	} 

	// No such triplet is found in array 
	return false;
	//cout << "No such triplet exists"; 
} 

// driver program 
int main() 
{ 
	 //= { 100, 100, 201}; 
	int n = 3; 
	int arr[n];
	int t=0;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3;i++)
		cin>>arr[i];
		if(findTriplet(arr, n))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl; 
	}
	
	return 0; 
} 

