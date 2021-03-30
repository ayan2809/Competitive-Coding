#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		fun(n-1);
		fun(n-1);
		//cout<<endl;
	}
}
int main()
{
	int n=0;
	cin>>n;
	fun(n);
}