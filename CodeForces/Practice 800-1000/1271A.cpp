#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	long long sum=0;
	int k=0;
	int k2=0;
	if(e>f)
	{
		 k=min(a,d);
		sum+=k*e;
		a-=k;
		d-=k;
		 k2=min(b,min(c,d));
		sum+=k2*f;

	}	
	else
	{
		 k=min(b,min(c,d));
		sum+=k*f;
		b-=k;
		c-=k;
		d-=k;
		 k2=min(a,d);
		sum+=k2*e;
	}
	cout<<sum<<endl;
}