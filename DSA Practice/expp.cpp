#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
int solve(int *arr, int size)
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans^=arr[i];
	}
	return ans;
}
int main(){
	time_t start, end;
	time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<solve(arr,n)<<endl;
	}
	time(&end);
	double time_taken = double(end - start);
	cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}




