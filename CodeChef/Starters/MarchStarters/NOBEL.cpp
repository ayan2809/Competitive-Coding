#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,m=0;
		cin>>n>>m;
		//cout<<n<<endl;
		vector <bool>a(n,false);

		for(int i=0;i<n;i++)
		{
			int taken=0;
			cin>>taken;
			taken--;
			a[taken]=true;
		}
		bool check=false;
		for(int i=0;i<m;i++)
		{
			if(!a[i])
			{	check = true;
				break;}
		}
		//int count=0;
		//count = std::distance(a.begin(),std::unique(a.begin(), a.end()));
		 //cout<<count<<" "<<n<<endl;
        if(check==true)
        {
        	cout<<"Yes"<<endl;
        }
        else
        {
        	cout<<"No"<<endl;
        }

	}
}