// C++ code to print all possible 
// subsequences for given array using 
// recursion 
#include <bits/stdc++.h> 
using namespace std; 

//void printArray(vector<int> arr, int n) 
//{ 
//	for (int i = 0; i < n; i++) 
//		cout << arr[i] << " "; 
//	cout << endl; 
//} 

 
void printSubsequences(int arr,
					vector<int> subarr,int k,int m,vector <vector<int> > & vect) 
{ 
	
	if (arr == k+1) 
	{ 
		int l = subarr.size(); 

		// Condition to avoid printing 
		// empty subsequence 
		if (l != 0 && m==0) 
			{
			vect.push_back(subarr);
			//printArray(subarr, l);
			return;	
			} 
	} 
	else
	{ 
	
		int out1=arr;
		int out2=-arr;
		arr=arr+1;
		
		vector <int> subarr1=subarr;
		vector <int> subarr2=subarr;
		subarr1.push_back(out1); 
 		subarr2.push_back(out2);
 		
		printSubsequences(arr, subarr1,k,m-1,vect); 
		printSubsequences(arr, subarr2,k,m,vect); 
		
		
	} 
	return; 
} 

// Driver Code 
int main() 
{ 
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,k=0;
		cin>>n>>k;
		if(n==k)
		{
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
		}
		else
		{
			int sum=0;
			vector <int> output;
			  vector<vector<int> > vect;
			printSubsequences(1, output,n,k,vect); 
			for(int j=0;j<vect[0].size();j++)
			{
				cout<<vect[0][j]<<" ";
			}
			cout<<endl;
		}
		
	}

	//printSubsequences(1, b,3); 

	return 0; 
} 



