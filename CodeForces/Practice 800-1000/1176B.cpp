#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;cin>>n;
		vector<int>a (n);
		vector<int>b (n);
		int c1=0,c2=0,c3=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]%3==0)
				c1++;
			if(a[i]%3==1)
				c2++;
			if(a[i]%3==2)
				c3++;
		}
		
		int mini= min(c2,c3);
		c1+=mini;
		c2-=mini;
		c3-=mini;
		c1+=(c2+c3)/3;
		cout<<c1<<endl;
	}
}