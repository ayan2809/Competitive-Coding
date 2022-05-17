#include <bits/stdc++.h>
using namespace std;

unordered_map<int, bool> visited;
vector<int> ans;
void DFS(int v, vector<vector<int>> adj, int end, int count=0)
{
	if (v == end)
	{
		ans.push_back(count);
		return;
	}
	visited[v] = true;
	int i;
	for (size_t i=0;i<adj[v].size();i++)
	{
		if (!visited[i] && adj[v][i])
			DFS(i, adj, end, count + 1);
	}
}

int main()
{

	int n, x, start, end;
	cin >> n;
	vector<vector<int>> adj(n + 2, vector<int>(n + 2, 0));
	std::vector<int> database;
	int value;
	for (int i = 0; i <=n; i++)
	{
		string input;
		getline(cin, input);
		istringstream is(input);
		int num;
		while (is >> num)
			database.push_back(num);
		for (auto v : database)
		{
			adj[i - 1][v - 1] = 1;
		}
		database.clear();
	}
	cin>>start;
	cin>>end;
	DFS(start-1, adj, end-1, 0);	
	x = INT_MAX;
	for (auto i:ans)
	{
		x = min(i, x);
	}
	cout<< (x==INT_MAX?-1:x);
}