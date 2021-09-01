#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"


long long countSubArray(int N, vector<int> A)
{
	long long count = 0;

	long long last = -1;

	long long K = 0;


	for (int i = 0; i < N; i++) {

		if (A[i] % 2 == 0) {
	
			K = (i - last - 1);

			count += (K * (K + 1) / 2);

		
			last = i;
		}
	}


	K = (N - last - 1);

	count += (K * (K + 1) / 2);

	return count;
}

// Driver Code
int main()
{
	int n=0;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	cout << countSubArray(n, arr)<<endl;

	return 0;
}
