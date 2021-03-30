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
		vector <int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		int count=0;
		int m=n;
		int i=0;
		while(i<a.size()-1)
		{
//			for (auto it = a.begin(); it != a.end(); ++it) 
//        		cout << *it << " ";
//        		cout<<endl;
			int mini=min(a[i],a[i+1]),maxi=max(a[i],a[i+1]);
			if(maxi<=2*(mini))
			{
				i++;
			}
			else
			{
				int k=0;
				for(int j=mini+1;j<maxi;j++)
				{
					if(j*2>=maxi)
					{
						k=j;
						break;
					}
				}
				auto it=a.insert(a.begin() + (i+1), k);
				m++;
				count++; 
				
			}
		}
		cout<<count<<endl;
	}
	
}
