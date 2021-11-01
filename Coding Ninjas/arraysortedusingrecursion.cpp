#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
bool isSorted(int arr[], int size)
{
	*arr=5;
	(arr)++;
	*arr=6;
	//*arr=*arr+1;
	
	return 0;
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
		for(auto i=0;i<n;)
		{
			cin>>arr[i++];
		}
		cout<<isSorted(arr,n)<<endl;
		for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	}
	time(&end);
	double time_taken = double(end - start);
	cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
}