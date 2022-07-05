#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int ans;
	queue<int> q;
	int count=0, end=n-1;
	while(m--)
	{
		int curr;
		cin>>curr;
		for(;count<curr;count++)
		{
			if(end>=0 && (q.empty() || (arr[end]>=q.front())))
			{
				ans=arr[end];
				end--;
			}
			else
			{
				ans=q.front();
				q.pop();
			}
			q.push(ans/2);
		}
		cout<<ans<<endl;
	}
}