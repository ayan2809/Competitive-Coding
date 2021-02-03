// C++ program to check if a given number is lucky 
#include<iostream> 
using namespace std; 

bool containsDigit(int number, int digit)
{
    while (number != 0)
    {
        int curr_digit = number % 10;
        if (curr_digit == digit) return true;
        number /= 10;
    }

    return false;
}

// This function returns true if n is lucky 
bool isLucky(int n) 
{ 
	// Create an array of size 10 and initialize all 
	// elements as false. This array is used to check 
	// if a digit is already seen or not. 
	bool arr[10]; 
	for (int i=0; i<10; i++) 
		arr[i] = false; 

	// Traverse through all digits of given number 
	while (n > 0) 
	{ 
		// Find the last digit 
		int digit = n%10; 

		// If digit is already seen, return false 
		if (arr[digit]) 
		return false; 

		// Mark this digit as seen 
		arr[digit] = true; 

		// REmove the last digit from number 
		n = n/10; 
	} 
	return true; 
} 

// Driver program to test above function. 
int main() 
{ 
//	int arr[] = {24,25,27}; 
//	int n = sizeof(arr)/sizeof(arr[0]); 
//
//	for (int i=0; i<n; i++) 
//		isLucky(arr[i])? cout << arr[i] << " is Lucky \n": 
//						cout << arr[i] << " is not Lucky \n";

	int t=0;
	cin>>t;
	while(t--)
	{
		long int n=0,k=0;
		cin>>n>>k;
		long int g=0;
		while(n--)
		{
			cin>>g;
			if(containsDigit(g, k))
			cout<<"YES"<<endl;
			else
			{
				while(g>k)
				{
					g=g-k;
					if(containsDigit(g,k) || g==0)
					{
						cout<<"YES"<<endl;
						break;
					}
					
				}
				if(g<k)
				{
					cout<<"NO"<<endl;
				}
			}
		}
	 } 
	return 0; 
} 

