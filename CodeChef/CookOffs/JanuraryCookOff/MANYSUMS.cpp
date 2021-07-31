#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t=0;
	cin>>t;
	while(t--)
	{
		long long int l=0,r=0;
		set<int, greater<int> > s1;
		cin>>l>>r;
//		for(int i=l;i<=r;i++)
//		{
//			long long int sum=0;
//			for(int j=l;j<=r;j++)
//			{
//				sum=i+j;
//				s1.insert(sum);
//			}	
//		}
//		cout<<s1.size()<<endl;

// this is a brute force approach using sets

		l=2*l;
		r=2*r;
		
		cout<<(r-l)+1<<endl;
	}
}
