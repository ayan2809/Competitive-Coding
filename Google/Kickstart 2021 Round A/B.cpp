#include<bits/stdc++.h>
using namespace std;
#define MAX 1001
#define IOS ios::sync_with_stdio(0); cin.tie(0);
vector <int> traverseLshape1(vector <vector <int>> a, int n, int m) 
{ 
    vector <int> b;
    for (int j = 0; j < m; j++) { 
  
         
        for (int i = 0; i <= n - j - 1; i++) 
            b.push_back(a[i][j]);
			// << " "; 
  
        
        for (int k = j + 1; k < m; k++) 
            b.push_back(a[n - 1 - j][k]); 
    } 
    
    
    return b;
} 
vector <int> traverseLshape2(vector <vector <int>> a, int n, int m) 
{ 
    vector <int> b;
    for (int j = m-1; j >= 0; j--) { 
  
         
        for (int i = n-j-1; i >=0 ; i--) 
            b.push_back(a[i][j]);
			// << " "; 
  
        
        for (int k = m-1; k >=j+1; k--) 
            b.push_back(a[n - 1 - j][k]); 
    } 
    
    
    return b;
} 


int main()
{
	IOS;
	int t=0;
	cin>>t;
	int j=1;
	while(t--)
	{
		int r=0,c=0;
		cin>>r>>c;
		vector<vector<int>> a( r , vector<int> (c, 0)); 
		for(int i=0;i<r;i++)
		{
			//int m=0;
			for(int k=0;k<c;k++)
			{
				cin>>a[i][k];
				//a[i][k]=m;
				//cout<<a[i][k]<<" ";
				//cin>>a[i][k];
			}
			//cout<<endl;
		}
		vector<int> b;
		vector<int> d;
		vector<int> s;
		vector<int> m;
		
		b=traverseLshape1(a,r,c);
		d=traverseLshape2(a,r,c);
		for(int i=0;i<b.size();i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		for(int i=0;i<d.size();i++)
		{
			cout<<d[i]<<" ";
		}
		cout<<endl;
		
	
	//cout<<"Case #"<<j<<": "<<count<<endl;	
	}
	
	
}
