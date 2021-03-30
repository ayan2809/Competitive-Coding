#include<bits/stdc++.h>
using namespace std;
double taylor(int x,int n)
{
	static double p=1,f=1;
	double r;
	if(n==1)
		return 1;
	r=taylor(x,n-1);
	p=p*x;
	f=f*n;
	return r+p/f;
}
int main()
{
	int n=0,x=0;
	cin>>x>>n;
	cout<<taylor(x,n);

}