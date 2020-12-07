/*The question is :

You are given two positive integers A and B. 
Find the number of pairs of positive integers (X,Y) such that 1=X=A, 1=Y=B and X+Y is even.
**/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t=0;
	cin>>t;
	while(t--)
	{
		long long int a=0,b=0;
		cin>>a>>b;
		long long int even1=a/2;
		long long int even2= b/2;
		long long int odd1=a-even1;
		long long int odd2= b-even2;
		cout<<(even1*even2)+(odd1*odd2)<<endl;
		
	}
}
