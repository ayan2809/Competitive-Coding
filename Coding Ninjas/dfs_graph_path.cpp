#include<bits/stdc++.h>
using namespace std;
vector<int> get_path_dfs(int **graph, int n, bool *visited, int cv, int v2)
{
	if(cv==v2)
	{
		vector<int> ans;
		ans.push_back(cv);
		return ans;
	}
	for(int i=0;i<n;i++)
	{
		if(!visited[i] && i!=cv &&graph[cv][i]==1)
		{
			vector<int> ans;
			visited[i]=true;
			ans=get_path_dfs(graph, n, visited, i, v2);
			if(ans.size()!=0)
			{
				ans.push_back(cv);
				return ans;
			}
		}
	}
}
int main()
{
	int n=0,e=0;
	cin>>n>>e;
	int **graph= new int*[n];
	for(int i=0;i<n;i++)
	{
		graph[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			graph[i][j]=0;
		}
	}
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a][b]=1;
		graph[b][a]=1;		
	}
	bool *visited= new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	int v1, v2;
	cin>>v1>>v2;
	visited[v1]=true;
	vector<int> ans=get_path_dfs(graph, n, visited, v1, v2);
	if(ans.size()!=0)
	{
		for(auto it: ans)
			cout<<it<<" ";
	}
}