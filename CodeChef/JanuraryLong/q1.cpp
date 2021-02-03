#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t=0;
	cin>>t;
	while(t--)
	{
		long long int n=0,m=0,sum1=0,sum2=0,f=0;
		cin>>n>>m;
		vector <long long int> a;
		vector <long long int> b;
		long long int k=0;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			a.push_back(k);
			sum1+=k;
		}
		for(int i=0;i<m;i++)
		{
			cin>>k;
			sum2+=k;
			b.push_back(k);
		}
		
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
//		if(a[0]==b[m-1])
//		cout<<-1<<endl;
//		else if(sum1>sum2)
//		cout<<0<<endl;
//		else if(sum1<=sum2)
//		{
//			long long temp=0,temp2=0;
//			long long it=0;
//			while(sum1<sum2)
//			{
//				it=0;
//				temp=a[0];
//				temp2=b[m-1];
//				a.erase(a.begin());
//				a.push_back(b[m-1]);
//				b.pop_back();
//				b.insert(b.begin(),temp);
//				//b.push_back(temp);
//				//sort(a.begin(), a.end());
//				//sort(b.begin(), b.end());
//				sum1=sum1-temp+temp2;
//				sum2=sum2-temp2+temp;
//				f++;
//				if(sum1>sum2)
//				break;
//			}
//			cout<<f<<endl;
//		}

		for(int i=0,j=m-1;i<n;i++,j--)
		{
			if(sum1 >sum2)
			break;
			
			f++;
			sum1-=a[i];
			sum1+=b[j];
			
			sum2-=b[j];
			sum2+=a[i];
		}
		if(sum1>sum2)
		{
			cout<<f<<endl;
			
		}
		else
		cout<<"-1"<<endl;
		
		a.clear();
		b.clear();
//		for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
//		cout<<endl;
//		for(int i=0;i<m;i++)
//		cout<<b[i]<<" ";
//		cout<<endl;  
		//cout<<sum1<<" "<<sum2<<endl;
		
		
	}
}
