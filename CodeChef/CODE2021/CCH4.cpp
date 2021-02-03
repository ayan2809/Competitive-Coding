#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t=0,n=0;
	cin>>t;
	n=t;
	vector <long long int> maxer;
	long long int maxx=0;
	while(t--)
	{
	    long long int a=0,b=0;
	    cin>>a>>b;
	    maxer.push_back(a+b);
	    if(a+b>maxx)
	    maxx=a+b;
	}
	for(int i=0;i<n;i++)
	{
	    if(maxx==maxer[i])
	    {
	        cout<<i+1<<" ";
	    }
	}
	return 0;
}

