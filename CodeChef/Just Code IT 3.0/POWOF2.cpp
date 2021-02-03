#include<bits/stdc++.h>
using namespace std;
bool integer(float k)
{
    return k == (float)(int)k;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		long double n=0;
		cin>>n;
		if(integer(log2(n)))
		cout<<log2(n)<<endl;
		else
		cout<<0<<endl;
	}
}
