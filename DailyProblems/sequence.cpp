#include<iostream>
#include<stdio.h>
using namespace std;
void Print(int n,int m)
{
	
	if(n==1)
	{
		cout<<n<<endl;
		return;
	}
	if(n%2!=0)
	{
		cout<<n<<endl;
		
	}
	Print(n-1,m);
	
	if(n%2==0)
	{
		cout<<n<<endl;
//		Print(n+2,m);
	}
	
}
int main() {
	int n=0;
	cin>>n;
	Print(n,n);
	return 0;
}
