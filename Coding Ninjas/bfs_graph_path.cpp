#include<bits/stdc++.h>
using namespace std;
void get_path_bfs(int **graph, int n, bool *visited, int cv, int v2)
{
	queue<int> q;
	q.push(cv);
	visited[cv]=true;
	map<int, int> umap;
	while(!q.empty())
	{
		int current=q.front();
		if(current==v2)
			return;
		for(int i=0;i<n;i++)
		{
			if(!visited[i] && graph[cv][i]==1 && cv!=i)
			{
				q.push(i);
				visited[i]=true;
				umap[i]=current;
			}
		}
		q.pop();
		if(q.empty())
		{
			return;
		}
	}
	int i=v2;
	cout<<v2<<" ";
	while(i!=cv)
	{
		cout<<umap[i]<<" ";
		i=umap[i];
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
	// visited[v1]=true;
	get_path_bfs(graph, n, visited, v1, v2);
	// if(ans.size()!=0)
	// {
	// 	for(auto it: ans)
	// 		cout<<it<<" ";
	// }
}



