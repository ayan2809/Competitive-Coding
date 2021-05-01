#include<bits/stdc++.h>
using namespace std;
#define ll long long
// ll Solution(vector<ll> A)
// {
//     ll ans = 2;
//     ll n = A.size();
//     if (n <= 2)
//         return n;
 
//     vector<ll> llap(n, 2);
 
//     sort(A.begin(), A.end());
 
//     for (ll j = n - 2; j >= 0; j--)
//     {
//         ll i = j - 1;
//         ll k = j + 1;
//         while (i >= 0 && k < n)
//         {
//             if (A[i] + A[k] == 2 * A[j])
//             {
//                 llap[j] = max(llap[k] + 1, llap[j]);
//                 ans = max(ans, llap[j]);
//                 i -= 1;
//                 k += 1;
//             }
//             else if (A[i] + A[k] < 2 * A[j])
//                 k += 1;
//             else
//                 i -= 1;
//         }
//     }
//     return ans;
// }
int main()
{
	ll t=0;
	cin>>t;
	int k=1;
	while(t--)
	{
		ll n=0;
		cin>>n;
		cout<<"Case #"<<k<<": ";
		vector <ll> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int g=a[0]-a[1];
		for (ll i=0;i<n-1;i++)
		{

			if(a[i]-a[i+1]!=g)
			{
				a[i+1]=a[i]-g;
				break;
			}
		}
		ll count=1;
		for(ll i=0;i<n-1;i++)
		{
			if(a[i]-a[i+1]==g)
			{
				count++;
			}
			else
			{
				break;
			}
		}
		cout<<count<<endl;
		k++;
	}
}