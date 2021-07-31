#include <bits/stdc++.h> 
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while(t--)
    {
        set <int, greater <int> > s1;
        int n=0,k=0,x=0,y=0,f=0,sum=0,g=0;
        cin>>n>>k>>x>>y;
        s1.insert(x);
        sum=x;
        while(g!=n){
            sum=(k+sum)%n;
            //cout<<sum<<endl;
            g+=1;
            if(sum==y){
            cout<<"YES"<<endl;
            f=1;
            break;}
        }
        if(f!=1)
        cout<<"NO"<<endl;
    }
	return 0;
}

