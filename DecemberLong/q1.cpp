#include<bits/stdc++.h>
using namespace std;
int main()
{
	int days=0;
	double a=0;
	int d1=0,d2=0,v1=0,v2=0,p=0;
	cin>>d1>>v1>>d2>>v2>>p;
	if(d1==d2)
	{
	 days =v1+v2;
	 a=(double)p/days;
	 //cout<<a;
	 cout<<ceil(a);
	}
	else 
	{
		cout<<"Hola";
	}
	
}
