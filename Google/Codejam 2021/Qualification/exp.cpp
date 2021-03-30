#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector <int> a(n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		 for(int i=0;i<n;i++)
		 {
		 	cout<<*min_element(a.begin()+i,a.end());
		 }
		 cout<<endl;
		 
		//cout<<sum<<endl;
	}
}