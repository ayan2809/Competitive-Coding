#include<iostream>
#include<stdio.h>
using namespace std;
int Print(int n)
{
	if(n==0)
	return 1;
	
	Print(n-1);
	cout<<n<<" ";
}
int main()
{
	Print(7);
	//return 0;
	
}
