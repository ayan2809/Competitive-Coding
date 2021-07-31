#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,e=0,h=0,a=0,b=0,c=0;
		cin>>n>>e>>h>>a>>b>>c;
		vector<long long> ans;
        vector<long long> v;
        for (int i = 0; i <= n + 1; i++)
		{
            v.push_back(i);
        }
        for (long long m = 0; m <= n; m++) 
		{
            long long a1 = lower_bound(v.begin(), v.end(), (2 * n - e - 2 * m)) - v.begin();
            
            long long a2 = upper_bound(v.begin(), v.end(), (h - 3 * m)) - v.begin() - 1;
            
            
            
            if (a2 < a1 || a1 == n + 1)
                continue;
            if (a2 == n + 1 && (a2 + 3 * m) > h)
                continue;
            long long k;
            if (c > a)
            {
            	if(a1 < (n - m))
            	k=a1;
            	else
            	k=n-m;
			}
            else
            {
            	if(a2<(n-m))
            	k=a2;
            	else
            	k=n-m;
			}
                

            long long o = n - k - m;
            
            
            if (k + 2 * m >= 2 * n - e && k + 3 * m <= h) 
			{
                ans.push_back(a * o + b * m + c * k);
            }
            
        }
        if (ans.empty())
        {
        	cout << "-1" << endl;
		}
            
        else 
		{	
            long long min = ans[0];
            
            for (long long i: ans)
			 {
                if (i < min)
				{
                    min = i;
                }
            }
            cout << min << endl;
        }
	}
}
