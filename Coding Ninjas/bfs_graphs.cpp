#include<bits/stdc++.h>
using namespace std;
void print(int **edges, int n, int sv, bool *visited)
{
	queue<int> q;
	q.push(sv);
	visited[sv]=true;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		sv=q.front();
		for(int i=1;i<n;i++)
		{
			if(!(i==sv) && !visited[i] && edges[sv][i]==1)
			{
				q.push(i);
				visited[i]=true;
			}
		}
		q.pop();
	}
}
int main()
{
	int n=0,e=0;
	cin>>n>>e;
	int **edges = new int*[n];
	for(int i=0;i<n;i++)
	{
		edges[i]=new int[n];
		for(int j=0;j<n;j++)
		{
			edges[i][j]=0;
		}
	}
	for(int i=0;i<e;i++)
	{
		int f,s;
		cin>>f>>s;
		edges[f][s]=1;
		edges[s][f]=1;
	}
	bool *visited= new bool[n];
	for(int i=0;i<n;i++)
	{
		visited[i]=false;
	}
	for(int i=0;i<n;i++)
	{
		if(!visited[i])
		print(edges, n, i, visited);	
	}
}