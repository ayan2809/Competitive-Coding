#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d=0,y=0;
	cin>>d>>y;
	while(d--)
	{
		int n=0;
		cin>>n;
		int sum=0;
		while(n--)
		{
			int a=0,b=0;
			cin>>a>>b;
			if(a<21600 && b <=21600)
			{
				sum+=0;
			}
			else if(a<21600 && b>=21600)
			{
				sum+=(b-21600)*y;
			}
			else
			{
				sum+=(b-a)*y;
			}
		}
		cout<<sum<<endl;
		
	}
	
}