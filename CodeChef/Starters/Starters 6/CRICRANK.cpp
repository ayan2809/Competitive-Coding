#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		vector<int> input(6);
		for(int i=0;i<6;i++)
		{
			cin>>input[i];
		}
		int f=0;
		for(int i=0;i<3;i++)
		{
			if(input[i]>input[i+3])
				f++;
		}
		if(f>=2)
			cout<<"A"<<endl;
		else
			cout<<"B"<<endl;
	}
}