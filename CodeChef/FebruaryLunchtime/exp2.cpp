// C++ implementation to find nCr
#include <bits/stdc++.h>
using namespace std;

// Function to find the nCr
long long printNcR(int n, int r)
{

	// p holds the value of n*(n-1)*(n-2)...,
	// k holds the value of r*(r-1)...
	long long p = 1, k = 1;

	// C(n, r) == C(n, n-r),
	// choosing the smaller value
	if (n - r < r)
		r = n - r;

	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;

			// gcd of p, k
			long long m = __gcd(p, k);

			// dividing by gcd, to simplify
			// product division by their gcd 
			// saves from the overflow
			p /= m;
			k /= m;

			n--;
			r--;
		}

		// k should be simplified to 1
		// as C(n, r) is a natural number
		// (denominator should be 1 ) .
	}

	else
		p = 1;

	// if our approach is correct p = ans and k =1
	return p;
}

// Driver code
int main()
{
    
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,m=0,k=0;
        cin>>n>>m>>k;
        int p=0;
        cin>>p;
        vector<int> a(p);
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
        }
        long long sum=0;
        for(int i=0;i<k;i++)
        {
            long long out1=0,out2=0;
            if(count(a.begin(),a.end(),i)>=1)
            continue;
            else
            {
              out1=printNcR(n,i);
              out2=printNcR(m,k-i);
              sum+=out1*out2;
            }
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    
    
// 	int n = 50, r = 25;

// 	printNcR(n, r);
return 0;

}

