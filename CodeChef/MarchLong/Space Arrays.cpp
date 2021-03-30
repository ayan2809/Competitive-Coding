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
		long long sum1=0,sum2=0,d=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum1+=a[i];
		}
		int f=0;
		sort(a.begin(),a.end());
		for(int i=0;i<n;i++)
		{
			if(i+1<a[i])
			{
				f=1;
				break;
			}
			sum2+=abs(a[i]-(i+1));
		}
//		if(sum%2==0 && n%2==0 || sum%2!=0 && n%2!=0)
//		cout<<"Second"<<endl;
//		else
//		cout<<"First"<<endl
		if(sum2%2==0 || f==1)
		cout<<"Second"<<endl;
		else
		cout<<"First"<<endl;
	
	}
}
