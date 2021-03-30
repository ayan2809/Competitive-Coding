// C++ program to check if it is possible to reach 
// (a, b) from (x, y). 
#include <bits/stdc++.h> 
using namespace std; 

// Returns GCD of i and j 
int gcd(int i, int j) 
{ 
	if (i == j) 
		return i; 

	if (i > j) 
		return gcd(i - j, j); 
	return gcd(i, j - i); 
} 

// Returns true if it is possble to go to (a, b) 
// from (x, y) 
bool ispossible(int x, int y, int a, int b) 
{ 
	// Find absolute values of all as sign doesn't 
	// matter. 
	x = abs(x), y = abs(y), a = abs(a), b = abs(b); 

	// If gcd is equal then it is possible to reach. 
	// Else not possible. 
	return (gcd(x, y) == gcd(a, b)); 
} 

// Driven Program 
int main() 
{ 
	// Converting coordinate into positive integer 
	 
	int t=0;
	cin>>t;
	while(t--)
	{
		int x = 0, y = 0;
		int a = 0, b = 0;
		string s;
		 
		cin>>a>>b;
		cin>>s;
		
	(ispossible(a, b, x, y)) ? (cout << "Yes") : (cout << "No"); 
	}
	
	return 0; 
} 

