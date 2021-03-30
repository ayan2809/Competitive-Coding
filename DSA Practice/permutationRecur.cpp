#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0)
		return 1; 
	else
		return fact(n-1)*n;
}
int permutation(int n,int r)
{
	int numerator=fact(n);
	int denom=fact(n-r);
	return (numerator/denom);
}
int main()
{
	int n=0,r=0;
	cin>>n;
	cin>>r;
	cout<<permutation(n,r);
}