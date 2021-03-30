#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		long long n=0,c=0,d=0;
		cin>>c;
		n=(int)log2(c)+1;
		d=pow(2,n-1);
		n=0;
		cout<<d*(3*d-c-4)+1+c<<endl;
	}
}



