#include<bits/stdc++.h>
using namespace std;
int ans=0;
void dfs(vector<vector<char>> board, int n, int m, int i, int j, bool **visited, string s)
{
	if(s.size()==0)
	{
		ans++;
		return;
	}
	if(i<0 || j<0 || i>=n || j>=m)
		return;
	if(s[0]!=board[i][j])
		return;
	if(visited[i][j])
		return;
	visited[i][j]=true;
	dfs(board, n, m, i+1, j, visited, s.substr(1));
	dfs(board, n, m, i, j+1, visited, s.substr(1));
	dfs(board, n, m, i-1, j, visited, s.substr(1));
	dfs(board, n, m, i, j-1, visited, s.substr(1));
	dfs(board, n, m, i+1, j+1, visited, s.substr(1));
	dfs(board, n, m, i+1, j-1, visited, s.substr(1));
	dfs(board, n, m, i-1, j+1, visited, s.substr(1));
	dfs(board, n, m, i-1, j-1, visited, s.substr(1));
	visited[i][j]=false;
}
bool dfsPath(vector<vector<char>> board, int n, int m)
{
	string s="CODINGNINJA";
	bool ** visited= new bool*[n];
	for(int i=0;i<n;i++)
	{
		visited[i]= new bool[m];
		for(int j=0;j<m;j++)
		{
			visited[i][j]=false;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(board[i][j]==s[0])
			{
				dfs(board, n, m, i, j, visited, s);
				if(ans>=1)
				return true;	
			}
		}
	}
	return false;
}
int main()
{
	int n=0,m=0;
	cin>>n>>m;
	vector<vector<char>> board;
	for(int i=0;i<n;i++)
	{
		vector<char> x;
		for(int i=0;i<m;i++)
		{
			char ch;
			cin>>ch;
			x.push_back(ch);
		}
		board.push_back(x);
	}
	cout<<dfsPath(board, n, m);
}