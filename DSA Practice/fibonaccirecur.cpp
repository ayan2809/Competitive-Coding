#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
	if(n==1)
		return 1;
	if(n==0)
		return 0;
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int n=0;
	cin>>n;
	cout<<fib(n);
}