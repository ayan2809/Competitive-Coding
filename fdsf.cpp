// Code to demonstrate Divide and 
// Conquer Algorithm 
#include <stdio.h> 
int DAC_Even(int a[], int index, int l); 

// function to find the maximum no. 
// in a given array. 

int DAC_Even(int a[], int index, int l) 
{ 
	int even=0; 
	if (index >= l ) { 
		if (a[index]%2) 
			return a[index]; 
		else
			return 0; 
	} 

	// Logic to find the Minimum element 
	// in the given array. 
	even += DAC_Even(a, index + 1, l); 

	if (a[index] %2) 
		return a[index]; 
	else
		return 0; 
} 

// Driver Code 
int main() 
{ 
	// Defining the variables 
	int even,N; 

	int a[7] = { 73, 250, 50, 80, 141, 12, 14 }; 
	
	even = DAC_Even(a, 0, 7); 
	printf("The even number in a given array is : %d\n", even); 
	return 0; 
} 


