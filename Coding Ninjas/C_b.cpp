#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

bool** dp;
int cnt=0;
void sumSubsets(vector<int> set, int n, int target)
{
	
	int x[set.size()];
	int j = set.size() - 1;

	while (n > 0)
	{
		x[j] = n % 2;
		n = n / 2;
		j--;
	}

	int sum = 0;

	for (int i = 0; i < set.size(); i++)
		if (x[i] == 1)
			sum = sum + set[i];

	if (sum == target && cnt==0)
	{
		int count=0;
		
		// cout<<("{");
		for (int i = 0; i < set.size(); i++)
			if (x[i] == 1)
				count++;
		cout<<endl<<count<<endl;
		for (int i = 0; i < set.size(); i++)
			if (x[i] == 1)
				cout << set[i] << " ";
		// cout << ("}, ");
			cnt++;

	}
}


void findSubsets(vector<int> arr, int K)
{
	int x = pow(2, arr.size());
	for (int i = 1; i < x; i++)
	{
		if(cnt<=0)
			sumSubsets(arr, i, K);
		else
			return;
	}
}

void solve()
{
	cnt=0;
	int n=0,x=0,y=0;
	cin>>n>>x>>y;
	int sum=0;
	// int arr[n];
	vector<int> arr;
	for(int i=1;i<=n;i++)
	{
		// arr[i-1]=i;
		arr.push_back(i);
		sum+=i;
	}
	int a=x+y;
	if(a==sum)
	{
		int summ = x;
		cout<<"POSSIBLE";
		// printAllSubsets(arr, n, summ);
		findSubsets(arr, summ);
		return;
	}
	for(int i=1;i<=sum;i++)
	{
		a=(x*i)+(y*i);
		// cout<<a<<endl;
		if(a==sum)
		{
			int summ = x*i;
			// cout<<summ;
			cout<<"POSSIBLE";
			// printAllSubsets(arr, n, summ);
			findSubsets(arr, summ);
			return;
		}
	}
	cout<<"IMPOSSIBLE";

}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		// out={};
		cout<<"Case #"<<k<<": ";
		solve();
		cout<<endl;
		k++;
	}
}