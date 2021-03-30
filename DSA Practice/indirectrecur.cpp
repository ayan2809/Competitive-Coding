#include<bits/stdc++.h>
using namespace std;
void funA(int);

void funB(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		funA(n-3);
	}
}

void funA(int n)
{
	if(n>0)
	{
	cout<<n<<" ";
	funB(n-1);
	}
	
}

int main()
{
	int n=0;
	cin>>n;
	funA(n);
}