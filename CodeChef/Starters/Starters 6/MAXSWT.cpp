#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isUgly(long long n) {
        if(n<=0)
           return false;
        if(n==1)
            return true;
        vector<long long> ugly(n);
        ugly[0]=1;
        long long i2=0,i3=0,i5=0,next2=2,next3=3,next5=5,next=1;
        for(long long i=1;i<n;i++)
        {
            
            next=min(next2,min(next3,next5));
            ugly[i]=next;
            cout<<ugly[i]<<" ";
            if(ugly[i]==n)
            {
                return true;
            }
            if(ugly[i]>n)
                return false;
            if(next==next2)
            {
                i2++;
                next2=ugly[i2]*2;
            }
            if(next==next3)
            {
                i3++;
                next3=ugly[i3]*3;
            }
            if(next==next5)
            {
                i5++;
                next5=ugly[i5]*5;
            }
        }
        
           // return true;
        return false;
        
    }

int main()
{
	long long t=0;
	cin>>t;
	while(t--)
	{
		long long n=0;
		cin>>n;
		if(isUgly(n))
			cout<<"Yes"<<endl;
		else 
			cout<<"No"<<endl;
	}
}