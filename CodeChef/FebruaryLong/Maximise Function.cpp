#include<bits/stdc++.h>
using namespace std;
long triplet(long a,long b,long c)
{
	long sum=0;
	sum=abs(a-b)+abs(b-c)+abs(c-a);
	return sum;
}
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0;
		cin>>n;
		vector <long> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		vector <int> b;
	
//		for(int i=0;i< a.size();i++)
//		{
//			for(int j=i+1;j<a.size();j++)
//			{
//				int diff=abs(a[i]-a[j]);
//				b.push_back(diff);
//			}
//		}
		//int g=2;
		//int j=0;
		int max=0;
		int sum=0;
		sort(a.begin(),a.end());
		long sum1=triplet(a[0],a[n-1],a[n-2]);
		long sum2= triplet(a[0],a[1],a[n-1]);
		if(sum1>sum2)
		cout<<sum1<<endl;
		else
		cout<<sum2<<endl;
		
//		for (int i=0; i<n-2; i++)
//    {
//        for (int j=i+1; j<n-1; j++)
//        {
//            for (int k=j+1; k<n; k++)
//            {
//				sum=triplet(a[i],a[j],a[k]);
//				if(sum>max)
//				{
//					max=sum;
//				}
//			}
//			}
//			}
			
			//cout<<sum<<" ";
			
			//j=j+1;
			//g=g+1;
		//}
	//	cout<<max<<endl;
//		for(int i=0;i<b.size();i++)
//		{
//			cout<<b[i]<<" ";
//		}
		//print(b);
		
	}
}
