#include<iostream>
#include<stdio.h>
using namespace std;
void pat(int n)
{
	if(n==0)
	return ;
	pat(n-1);
	cout<<"*	";
}
void pattern(int n)
{
	if(n==0)
	return ;
	
	pattern(n-1);
	cout<<endl;
	pat(n-1);
	
}

int main() {
	int n=0;
	cin>>n;
	pattern(n+1);
	
	return 0;
}
