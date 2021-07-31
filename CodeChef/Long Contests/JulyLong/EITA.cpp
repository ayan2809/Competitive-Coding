#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--){
		int d=0,x=0,y=0,z=0;
		cin>>d>>x>>y>>z;
		cout<<max((x*7),(y*d+z*(7-d)))<<"\n";
	
	}
}