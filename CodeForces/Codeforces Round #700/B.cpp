#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		long int A=0,B=0,n=0;
		cin>>A>>B>>n;
		long int sum1=0,sum2=0;
		vector <long int> a(n);
		vector<long int> b(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum1+=a[i];	
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			sum2+=b[i];
		}
		int i=0;
		int f=0;
		int g=ceil(double(sum2)/A);
		int k=g-1;
		//cout<<g<<" "<<k<<endl;
		B=B-(g*a[i]);
		long B2=B-(k*a[i]);
		sum2=sum2-(g*A);
		long sum3=sum2-(k*A);
		if(B<0 && B2<0 && sum2<=0 && sum3<=0)
		cout<<"YES"<<endl;
		else if((B<0 && sum2>0)||(B2<0 && sum3>0))
		cout<<"NO"<<endl;
		else if(B>0 && B2>0)
		cout<<"YES"<<endl;
//		while(B>=0 || i!=n)
//		{
//			int g=double(b[i])/A;
//			B=B-(g*a[i]);
//			i=i+1;
//			
//			if(B<0 && i==n)
//			{
//				f=1;
//				cout<<"YES"<<endl;
//				break;
//			}
//			if(B<0)
//			{
//				f=2;
//				cout<<"NO"<<endl;
//				break;	
//			}
//			if(i==n)
//			break;
//		}
//		if(f==0)
//		cout<<"YES"<<endl;
	}
}
