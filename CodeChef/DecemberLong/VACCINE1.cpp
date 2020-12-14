#include<bits/stdc++.h>
using namespace std;
int solve(int d1,int d2,int v1, int v2,int day, int count)
{
	while(day>0)
	{
		//cout<<day<<" ";
		if(d1>0)
		{
			day=day-v1;
			d1--;
			count++;
		}
		else
		{
			day=day-v1-v2;
			//d2--;
			count++;
		}
	}
	return count;
}
int main()
{
	int days=0;
	double a=0;
	int d1=0,d2=0,v1=0,v2=0,p=0;
	cin>>d1>>v1>>d2>>v2>>p;
	if(d1==d2)
	{
	 days =v1+v2;
	 a=(double)p/days;
	 //cout<<a;
	 cout<<ceil(a)+(d1-1);
	}
	else 
	{
		int mini=min(d1,d2);
		int total=0;
		int maxi= max(d1,d2);
		int a=0,b=0;
		if(mini==d1)
		{
			a=v1;
			b=v2;
		}
		else
		{
			b=v1;
			a=v2;
		}
		//cout<<mini<<" "<<maxi<<" "<<v1<<" "<<v2<<" "<<endl;
		cout<<solve(mini,maxi,a,b,p,mini-1);
	}
	
}
