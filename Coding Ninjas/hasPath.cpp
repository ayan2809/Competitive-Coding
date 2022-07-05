#include<bits/stdc++.h>
using namespace std;
bool checkHasPath(int **edges, int n, int v1, bool *visited, int v2)
{
	if(v1==v2)
	{
		return true;
	}
	for(int i=0;i<n;i++)
	{
		if((i!=v1) && (!visited[i]) && edges[v1][i]==1)
		{
			visited[i]=true;
			if(checkHasPath(edges, n, i, visited, v2))
			{
				return true;
			}
		}
	}
	return false;
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
	int v1=0,v2=0;
	cin>>v1>>v2;
	cout<<checkHasPath(edges, n, v1, visited, v2)<<endl;;
}