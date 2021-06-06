#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<1<<endl;
		}
		else if(n==2)
		{
			cout<<-1<<endl;
		}
		else
		{
			int a[n][n];
			int k1=1,k2=2,k=1;
			for (int i = 1; i <= n; i++)
			{
			for (int j = 1; j <= n; j++)
				{
					
					if((i+j)%2==0)
					{
						a[i-1][j-1]=k;
						k++;
					}
					// else
					// {
					// 	a[i-1][j-1]=k2;
					// 	k2+=2;
					// }
				}
			}
			for (int i = 1; i <= n; i++)
			{
			for (int j = 1; j <=n; j++)
				{
					
					// if((i+j)%2==0)
					// {
					// 	a[i-1][j-1]=k1;
					// 	k1+=2;
					// }
					if((i+j)%2!=0)
					{
						a[i-1][j-1]=k;
						k++;
					}
				}
			}

			for (int i = 0; i <n; i++)
			{
			for (int j = 0; j < n; j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		
	}
	
}
