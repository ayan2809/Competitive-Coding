#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	for(int i=10;i>=1;i--)
	{
		if(n%i==0)
		{
			cout<<i<<endl;
			break;
		}
	}
}
