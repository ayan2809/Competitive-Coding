#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int nextugly=1;
	int ugly[n];
	int i2=0,i3=0,i5=0;
	int nm2=2,nm3=3,nm5=5;
	
	ugly[0]=1;
	for(int i=1;i<n;i++)
	{
		nextugly=min(nm2,min(nm3,nm5));
		ugly[i]=nextugly;
		if(nextugly==nm2)
		{
			i2+=1;
			nm2=ugly[i2]*2;
		}
		if(nextugly==nm3)
		{
			i3+=1;
			nm3=ugly[i3]*3;
		}
		if(nextugly==nm5)
		{
			i5+=1;
			nm5=ugly[i5]*5;
		}
		
	}
	return nextugly;
}
int main()
{
	int n;
	cout<<"Enter the value of n to find the nth ugly number :";
	cin>>n;
	cout<<solve(n)<<endl;
}
