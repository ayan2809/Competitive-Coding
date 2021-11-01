#include <bits/stdc++.h>
using namespace std;
 
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m,a,b,k,l,g[1001][1001];
pair<int,int> pos[100001];
int main()
{
    int t=1;
    ios_base::sync_with_stdio(false);
    while (scanf("%d %d", &m, &n) && (n||m))
    {
        if (t>1) printf("\n");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                g[i][j] = 0;
        scanf("%d", &k);
        queue<pair<int,int>> q;
        for (int i = 0; i < k; i++)
        {
            scanf("%d %d", &a, &b); a--; b--;
            pos[i] = {a,b};
        }
        sort(pos,pos+k);
        for (int i = 0; i < k; i++)
        {
            g[pos[i].first][pos[i].second] = i+1;
            q.push(pos[i]);
        }
        while (!q.empty())
        {
            pair<int,int> root = q.front(); q.pop();
            int x = root.first, y = root.second, v = g[x][y];
            for (int i = 0; i < 4; i++)
                if (x+dx[i] >= 0 && x+dx[i] < n && y+dy[i] >= 0 && y+dy[i] < m && !g[x+dx[i]][y+dy[i]])
                {
                    g[x+dx[i]][y+dy[i]] = v;
                    q.push({x+dx[i],y+dy[i]});
                }
        }
        scanf("%d", &l);
        for (int i = 0; i < l; i++)
        {
            scanf("%d %d", &a, &b); a--; b--;
            printf("%d %d\n", pos[g[a][b]-1].first+1, pos[g[a][b]-1].second+1);
        }
    }
}