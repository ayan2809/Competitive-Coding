#include<bits/stdc++.h>
using namespace std;
int solve(int a, int b, int n)
{
	unsigned long long fib[n];
	fib[0]=a;
	fib[1]=b;
	for(int i=2;i<=n;i++)
	{
		fib[i]=(fib[i-1]* fib[i-1])+fib[i-2];
	}
	cout<<fib[n]<<endl;
}

int main()
{
	int n=0;
	int a=0,b=0;
	//cout<<"Enter the n to find the nth fibonacci number :";
	cin>>a>>b>>n;
	solve(a,b,n-1);
}
