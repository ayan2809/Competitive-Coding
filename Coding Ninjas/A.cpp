#include<bits/stdc++.h>
using namespace std; 
#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define endl "\n"
void add_edge(vector<int> adj[], int src, int dest)
{
	adj[src].push_back(dest);
	adj[dest].push_back(src);
}


bool BFS(vector<int> adj[], int src, int dest, int v,
		int pred[], int dist[])
{
	
	list<int> queue;
	bool visited[v];	
	for (int i = 0; i < v; i++) {
		visited[i] = false;
		dist[i] = INT_MAX;
		pred[i] = -1;
	}

	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);

	
	while (!queue.empty()) {
		int u = queue.front();
		queue.pop_front();
		for (int i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);

				
				if (adj[u][i] == dest)
					return true;
			}
		}
	}

	return false;
}


void printShortestDistance(vector<int> adj[], int s,
						int dest, int v)
{
	
	int pred[v], dist[v];

	if (BFS(adj, s, dest, v, pred, dist) == false) {
		cout << -1<<endl;
		return;
	}

	
	vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}


	// cout << dist[dest]<<endl;

	cout<<path.size()<<endl;
	// cout << "\nPath is::\n";
	// for (int i = path.size() - 1; i >= 0; i--)
	// 	cout << path[i] << " ";
}


void solve()
{
	int v=5;
	cin>>v;
	int f=v;
	vector<vector<int>> num;
	while(f--)
	{
		std::string line;
		while (std::getline(std::cin, line)) 
		{
		    std::istringstream ss(line);
		    num.emplace_back(std::istream_iterator<int>{ss}, std::istream_iterator<int>{});
		}
	}
	f=-1;
	vector<int> adj[v];
	for(auto it: num)
	{
		if(f>=0 && f<v)
		{
			cout<<f<<" ";
			for(auto itr: it)
		  	{
		  		auto mm= itr-1;
		  		cout<<mm<<" ";
		  		
		  		add_edge(adj, f, mm);
		  	}
		  	cout<<endl;
		}
		
	  	f++;
	}
  	int source= num[f][0]-1;
  	int dest= num[f][1]-1;
  	// cout<<source<<" "<<dest<<endl;
  	printShortestDistance(adj, source, dest, v);
	
	// 
	// add_edge(adj, 0, 3);
	// add_edge(adj, 1, 0);
	// add_edge(adj, 2, 0);
	// add_edge(adj, 2, 4);
	// add_edge(adj, 3, 1);
	// add_edge(adj, 3, 2);
	// add_edge(adj, 4, 4);
	// int source = 1, dest = 2;
	
	// printShortestDistance(adj, source, dest, v);
	// int source = 1, dest = 2;

	
}
int main(){
	// time_t start, end;
	// time(&start);
	IOS;
	ll t=0;
	// cin>>t;
	// while(t--)
	// {
		solve();
	// }
	// time(&end);
	// double time_taken = double(end - start);
	// cout << "Time taken by program is : " << fixed
         // << time_taken << setprecision(5);
}