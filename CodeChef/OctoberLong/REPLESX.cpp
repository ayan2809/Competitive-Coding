#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t=0;
	cin>>t;
	while(t--)
	{
	    int N=0,X=0,p=0,k=0,g=0;
	    cin>>N>>X>>p>>k;
	    vector <int> a(N);
	    for(int i=0;i<N;i++)
	    cin>>a[i];
	    
	    sort(a.begin(), a.end()); 
	   // for(int i=0;i<N;i++)
	   // {
	   //     cout<<a[i]<<" ";
	   // }
	    //cout<<endl;
	    int f=0;
	    if(count(a.begin(), a.end(), X )!=0)
	    while(a[p-1]!=X)
	    {
	        a[k-1]=0;
	        sort(a.begin(), a.end());
	       // for(int i=0;i<N;i++)
	       // {
	       // cout<<a[i]<<" ";
	       // }
	        //cout<<endl;
	        f++;
	        if(a[p-1]==0){
	            cout<<-1<<endl;
	            g=1;
	            break;
	    
	        }
	        }
	    else{
	    cout<<-1<<endl;
	     g=1;
	    }
	    if(g==0)
	    cout<<f<<endl;
	}
	return 0;
}

