#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0; 
	cin>>t;
	while(t--)
	{
		int n=0; 
		cin>>n;
		vector<int>a;
		vector<int>b;
		//int odd=0,even=0;
		n*=2;
		int x=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x%2==0)
				a.push_back(x);
			else
				b.push_back(x);
		}
		
		if(b.size()==a.size())
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		// cout<<odd<<" "<<even<<endl;
		// if(odd==even)
		// {
		// 	//cout<<odd<<" "<<even<<endl;
		// 	cout<<"Yes"<<endl;
		// }
		// else
		// {
		// 	cout<<"No"<<endl;
		// }

	}
}