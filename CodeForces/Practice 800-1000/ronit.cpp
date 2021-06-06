#include<bits/stdc++.h>
using namespace std;
int newNumber(int n)
{
	int digitCount =0;
	int count=(int)log10((double)n) +1;
	int newnum=0;

	while(digitCount!=count)
	{
	
		int d=n%10;		
		double d2=pow(10,digitCount);
		newnum=newnum+(9-d)*(int)d2;
		digitCount++;
		n/=10;
	}
	return newnum;
}
int main()
{
	int n=0;
	cin>>n;
	cout<<newNumber(n)<<endl;
}