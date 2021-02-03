#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	int count=0;
	while(t--)
	{
		
		int a=0,b=0,c=0;
		cin>>a>>b>>c;
		int sum=0;
		sum=a+b+c;
		if(sum>=2)
		count++;
	}
	cout<<count;
}
