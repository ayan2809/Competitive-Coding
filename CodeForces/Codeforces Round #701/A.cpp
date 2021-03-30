#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		long int a=0,b=0;
		cin>>a>>b;
		int count=0;
		while(a!=0)
		{
			count++;
			if(b==1 ||b==a)
			b+=1;
			else
			{
			double intPart, fractPart;
			double d=double(a)/double(b);
			fractPart = modf(d, &intPart);
			a=intPart;	
			}
			
			//b=b+1;
			cout<<a<<" ";
			
			
		}
		cout<<count<<endl;
	}
	
	
}
