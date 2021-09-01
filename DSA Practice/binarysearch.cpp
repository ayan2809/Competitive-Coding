#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void solve(vector<int> arr, int key)
{
	int s=0;
	int e=arr.size();
	int ans=-1;
	while(s<=e)
	{
		int mid=(s+e)/2;

		if(arr[mid]==key)
		{
			ans=mid;//,ans);
			//e=mid-1;
			s=mid+1;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	cout<<ans<<endl;

}
int main(){
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		vector<int> arr={0,1,1,2,3,3,3,3,4,5,5,5,10};
		solve(arr,3);
	}
}