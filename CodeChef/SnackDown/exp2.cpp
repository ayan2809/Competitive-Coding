
#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"

bool comp(pair<int,int> p1, pair<int,int> p2)
{
	if(p1.first==p2.first) return p1.second<p2.second;
	else return p1.first > p2.first;
}

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<set<int>> ss(n);
	vector<int> cnt(n,0);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		--a;
		--b;
		ss[a].insert(b);
		ss[b].insert(a);
	}
	for(int i=0;i<n;i++)
		cnt[i] = ss[i].size();

	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++)
		v[i].first = cnt[i], v[i].second = i;
	sort(begin(v),end(v), comp);
	priority_queue<pair<int,int>> q;
	for(int i=0;i<n;i++)
		q.push({v[i].first, v[i].second});
	set<int> recalc;
	int mn=INT_MAX, mx=0;
	vector<int> ans(n,-1);
	int ind = -1;
	while(!q.empty())
	{
		int cntNode = q.top().first;
		int node = q.top().second;
		q.pop();
		if(ans[node]!=-1) continue;

		if(!recalc.count(node))
		{
			ans[node] = ++ind;
			int cur=0;
			for(auto chield:ss[node])
			{
				if(ans[chield] != -1 && ans[chield] < ind)
					cur++;
				else if(ans[chield] == -1)
					recalc.insert(chield);
			}
			mn = min(mn, cur);
			mx = max(mx, cur);
		}
		else
		{
			int curCnt=0;
			for(auto chield:ss[node])
				if(ans[chield] == -1)
					curCnt++;
			q.push({curCnt, node});
		}
	}

	cout<< mx-mn<<"\n";
	for(auto d:ans)
		cout<<d+1<<" ";
	cout<<"\n";
}

int main()
{
	// time_t start, end;
	// time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	// time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}