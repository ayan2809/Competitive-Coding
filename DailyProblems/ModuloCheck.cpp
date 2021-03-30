#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=0;
	cin>>n;
	int m=47;
	long long fact=1;
	for(int i=1;i<n;i++)
	fact=(i*fact)%m;
	
	cout<<fact<<endl;
	
}
