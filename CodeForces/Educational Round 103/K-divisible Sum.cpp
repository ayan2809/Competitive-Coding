#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	
	while(t--)
	{
		long long int n=0,k=0;
		double a=0.0,b=0.0;	
		cin>>n>>k;
		if(n==k)
		cout<<1<<endl;
		else if(n<k)
		{
			//a=double(k/n);
			cout<<ceil(double(k)/double(n))<<endl;
		}
		
		else 
		{
			//b=n/k;
			cout<<ceil(double(n)/double(k))<<endl;
		}
		
	}
	//cout<<ceil(double(4)/double(3))<<endl;
}
