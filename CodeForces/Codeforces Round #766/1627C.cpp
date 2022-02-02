#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
// void findDegreeUndirectedGraph(vector<vector<int>> adjlist,
//                      int n)
// {
//     // vector<int> iN(n,0);
//     //   vector<int> ouT(n,0);
 
     
     
//     // for(int i=0;i<n;i++)
//     // {

//     //    ouT[i] = adjlist[i].size();

//     //        for(int j=0;j<adjlist[i].size();j++)
//     //       iN[adjlist[i][j]]++;
//     //  }
 
//     // cout << "Vertex\t\tIn\t\tOut" << endl;
//     // for(int k = 0; k < n; k++)
//     // {
//     //     cout << k << "\t\t"
//     //          << iN[k] << "\t\t"
//     //          << ouT[k] << endl;
//     // }
// 	int count=0,i,j;
// 	for(i=0;i<n;i++)
// 	{
// 		count=0;
// 		for(j=0;j<n;j++)
// 		{
// 			if()
// 		}
// 	}


// }
void solve()
{
	int n=0;
	cin>>n;
	vector<int> deg(n) ,a(n-1);
	vector<vector<array<int, 2>>> g(n);
	int i=0;
	while(n!=1)
	{
		int a=0,b=0;
		cin>>a>>b;
		deg[a-1]++; 	deg[b-1]++;
		g[--a].push_back({--b,i});
		g[b].push_back({a,i});
		n-=1;
		i++;	
	}
	
	if(*max_element(deg.begin(), deg.end())>2)
	{
		cout<<-1<<endl;
		return;
	}
	 function<void(int, int, int c)> dfs = [&] (int v, int p, int c) {
        for(auto &[u, i] : g[v]) if(u != p) {
            a[i] = c;
            dfs(u, v, c ^ 1);
        }
    };
    dfs(min_element(deg.begin(), deg.end()) - deg.begin(), -1, 0);
    for(auto &x : a)
        cout << x + 2 << ' ';
    cout << '\n';
	
}
int main(){
	time_t start, end;
	time(&start);
	IOS;
	ll t=0;
	cin>>t;
	while(t--)
	{
		solve();
	}
	time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
 //         << time_taken << setprecision(5);
}