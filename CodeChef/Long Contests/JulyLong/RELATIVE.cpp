#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll result=0; 
	ll t=0;
	cin>>t;// MyCustomType;
	while(t--)
	{
		int g=0,c=0;
		cin>>g>>c;
		result=c;
		result*=c;
		cout<<int(double(result)/double(2*g))<<endl;
	}
}