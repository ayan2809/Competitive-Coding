#include<bits/stdc++.h>
using namespace std; 
#define endl "\n"
int f(int a, int b)
{
	if (b==0)
		return 1;
	else if(b%2==0)
	{
		return f(a,b/2)*f(a,b/2);
	}
	else{
		return a*f(a,b/2)*f(a,b/2);
	}
}
void solve()
{
	int var=1;
	cout<<++var<<endl;
}
int main(){
		
	solve();
	
}