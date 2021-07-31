#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	int t=0;
	cin>>t;
	while(t--)
	{
	    long long int n=0,k=0,sum=0,f=0;
	    cin>>n>>k;
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	    {cin>>a[i];
	    sum+=a[i];
	    //if(sum<k)
	    //f=i+1;
	    }
	    cout<<sum/k+1<<endl;
	}
	return 0;
}

