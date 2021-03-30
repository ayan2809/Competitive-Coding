#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
struct hash_pair
{
    size_t operator()(const pair<int, int> &p) const
    {
        auto hash1 = hash<int>{}(p.fi);
        auto hash2 = hash<int>{}(p.se);
        return hash<size_t>{}(hash1 + hash2);
    }
};
int main()

{
	int t=0;
	cin>>t;
	while(t--)
	{
		int n=0,q=0,m=0;
		cin>>n>>q>>m;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		int freq[1000001] = {0};
        int res[m + 1] = {0};
        
        unordered_map<pair<int, int>, int, hash_pair> um;
		
		while(q--)
		{
			int l=0,r=0;
			cin>>l>>r;
			
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
		
		for (int i = 1; i < m+1; i++)
        freq[i] += freq[i - 1];

        cout<<*max_element(freq, freq + m + 1);
		
		
	}
	return 0;
}
