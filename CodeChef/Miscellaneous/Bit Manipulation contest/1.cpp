// C++ program to Count set
// bits in an integer
#include <bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

/* Program to test function countSetBits */
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		if(countSetBits(n)%2==0)
		cout<<"Magical"<<endl;
		else
		cout<<"Non-Magical"<<endl;
	}
//	int i = 9;
//	cout << countSetBits(i);
	return 0;
}

// This code is contributed
// by Akanksha Rai

