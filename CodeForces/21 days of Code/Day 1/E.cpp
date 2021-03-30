// C++ program to count the pair of integers(a, b) 
// which satisfy the equation 
// a^2 + b = n and a + b^2 = m 
#include <bits/stdc++.h> 
using namespace std; 

// Function to count valid pairs 
int pairCount(int n, int m) 
{ 
	int cnt = 0, b, a; 
	for (b = 0; b <= sqrt(m); b++) { 
		a = m - b * b; 
		if (a * a + b == n) { 
			cnt++; 
		} 
	} 
	return cnt; 
} 

// Driver code 
int main() 
{ 
	int n = 9, m = 3; 
	cin>>n>>m;
	cout << pairCount(n, m) << endl; 

	return 0; 
} 

