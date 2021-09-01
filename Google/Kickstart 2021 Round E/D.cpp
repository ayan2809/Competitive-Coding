#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void display(vector<int> a, int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
int checker(vector<int> a,int n)
{
	int k=a[0];
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(a[i]<k)
		{
			count++;
			k=a[i];
		}
	}
	return count;
}
void solve()
{
	double ans=0.0;
	int n=0;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=n;i++)
	{
		a.push_back(i);
	}

	int f=0,count=0;
	do {
		//display(a, n);
        f+=checker(a, n);
        count++;
    } while (next_permutation(a.begin(), a.end()));

    ans=(double)f/(double)count;
    cout<< fixed << setprecision(6) <<ans;
}
int main()
{
	IOS;
	int t=0;
	cin>>t;
	int k=1;
	while(t--)
	{	
		cout<<"Case #"<<k<<": ";
		solve();
		cout<<endl;
		k++;
	}
}