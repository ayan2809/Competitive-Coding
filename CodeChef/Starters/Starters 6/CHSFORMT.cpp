#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int a=0,b=0;
		cin>>a>>b;
		a+=b;
		if(a<3)
			cout<<1<<endl;
		else if(a>=3 && a<=10)
			cout<<2<<endl;
		else if(a>10&& a<=60)
			cout<<3<<endl;
		else
			cout<<4<<endl;
	}
}