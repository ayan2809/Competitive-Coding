// C++ program to implement 
// the above approach 

#include <bits/stdc++.h> 
using namespace std; 

// Function that returns the 
// minimum value of X 
int findMinimumX(int a[], int n) 
{ 

	// Declare a set 
	set<int> st; 

	// Iterate in the array element 
	// and insert them into the set 
	for (int i = 0; i < n; i++) 
		st.insert(a[i]); 

	// If unique elements is 1 
	if (st.size() == 1) 
		return 0; 

	// Unique elements is 2 
	if (st.size() == 2) { 
		// Get both el2 and el1 
		int el1 = *st.begin(); 
		int el2 = *st.rbegin(); 

		// Check if they are even 
		if ((el2 - el1) % 2 == 0) 
			return (el2 - el1) / 2; 
		else
			return (el2 - el1); 
	} 

	// If there are 3 unique elements 
	if (st.size() == 3) { 
		// Get three unique elements 
		auto it = st.begin(); 
		int el1 = *it; 
		it++; 
		int el2 = *it; 
		it++; 
		int el3 = *it; 

		// Check if their difference is same 
		if ((el2 - el1) == (el3 - el2)) 
			return el2 - el1; 
		else
			return -1; 
	} 

	// More than 3 unique elements 
	return -1; 
} 
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int b[3];
		b[0]=0;
		b[1]=0;
		b[2]=0;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]%3==0)
			b[0]=b[0]+1;
			if(a[i]%3==1)
			b[1]=b[1]+1;
			if(a[i]%3==2)
			b[2]=b[2]+1;
		}
//		for(int i=0;i<3;i++)
//		cout<<b[i]<<" ";
		//int k=sizeof(b) / sizeof(b[0]); 
		int g=findMinimumX(b,3);
		cout<<g<<endl; 
	}
}
