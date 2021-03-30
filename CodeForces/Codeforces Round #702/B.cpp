#include<bits/stdc++.h>
using namespace std;
int findMinimumX(vector<int> a, int n) 
{ 
	int count=0;
	while(*min_element(a.begin(),a.end())!=n/3)
	{
		for(int i=0;i<3;i++)
		{
			if(a[i]>n/3)
			{
				count++;
				a[i]--;
				a[(i+1)%3]++;
			}
		}
	}
//	for(int i=0;i<3;i++)
//		cout<<a[i]<<" ";
	
	return count;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector <int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		vector <int> b(3);
		b[0]=0;
		b[1]=0;
		b[2]=0;
		
		for(int i=0;i<n;i++)
		{
			if(a[i]%3==0)
			b[0]=b[0]+1;
			if(a[i]%3==1)
			b[1]=b[1]+1;
			if(a[i]%3==2)
			b[2]=b[2]+1;
		}
//		for(int i=0;i<3;i++)
//		cout<<b[i]<<" ";
		
		int g= findMinimumX(b, n);
		cout<<g<<endl; 
	}
}
