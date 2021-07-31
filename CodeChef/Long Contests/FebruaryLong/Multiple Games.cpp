#include<bits/stdc++.h>
//#define int long long int
//#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define ll long long
#define fi first
#define se second
#define fo(i, k, n) for (ll i = k; i < n; i++)

using namespace std;


typedef pair<int, int> pii;

struct hash_pair
{
    size_t operator()(const pii &p) const
    {
        auto hash1 = hash<int>{}(p.fi);
        auto hash2 = hash<int>{}(p.se);
        return hash<size_t>{}(hash1 + hash2);
    }
};
int main()
{
	//fastio;
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,q=0,m=0;
		cin>>n>>q>>m;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int freq[1000001] = {0};
        int res[m + 1] = {0};
        
        unordered_map<pii, int, hash_pair> um;
		
		while(q--)
		{
			int l=0,r=0;
			cin>>l>>r;
			l--;r--;
			if (a[l] > m)
                continue;

            if (a[r] <= m)
                um[{a[l], a[r]}]++;

            freq[a[l]]++, freq[m + 1]--;
		}
		for (auto ele : um)
        {
            int ff = ele.fi.fi, fs = ele.fi.se, s = ele.se;

            freq[fs + ff] -= s, freq[fs + 2 * ff] += s;

            int ctr = fs + 2 * ff;
            while (ctr + fs <= m)
            {
                ctr += fs;
                freq[ctr] -= s, freq[ctr + ff] += s;
                ctr += ff;
            }
        }
		
		fo(i, 1, m + 1) freq[i] += freq[i - 1];

        cout<<*max_element(freq, freq + m + 1);
		
		
	}
	return 0;
}

//
//int freq[1000001] = {0};
//        int res[m + 1] = {0};
//
//        unordered_map<pii, int, hash_pair> um;
//        while (q--)
//        {
//            int l, r;
//            si(l);
//            si(r);
//            l--, r--;
//
//            if (arr[l] > m)
//                continue;
//
//            if (arr[r] <= m)
//                um[{arr[l], arr[r]}]++;
//
//            freq[arr[l]]++, freq[m + 1]--;
//        }
//
//        for (auto ele : um)
//        {
//            int ff = ele.fi.fi, fs = ele.fi.se, s = ele.se;
//
//            freq[fs + ff] -= s, freq[fs + 2 * ff] += s;
//
//            int ctr = fs + 2 * ff;
//            while (ctr + fs <= m)
//            {
//                ctr += fs;
//                freq[ctr] -= s, freq[ctr + ff] += s;
//                ctr += ff;
//            }
//        }
//
//        fo(i, 1, m + 1) freq[i] += freq[i - 1];
//
//        pi(*max_element(freq, freq + m + 1));
//
//1
//3 2 10
//2 3 4
//1 2
//2 3
