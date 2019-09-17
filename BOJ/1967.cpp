#include <bits/stdc++.h>

using namespace std;

int mx[10001];

int main()
{
    int n;
    scanf("%d", &n);
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        adj[tmp1].push_back({tmp2, tmp3});
    }
    queue<pair<int, int>> bfs;
    int resmx = 0;
    for(int i=1;i<=n;i++)
    {
        int ssize = adj[i].size();
        if(ssize==0) continue;
        for(int j=0;j<ssize;j++)
            mx[j] = 0;
        for(int j=0;j<ssize;j++)
        {
            bfs.push({adj[i][j].first, adj[i][j].second});
            while(!bfs.empty())
            {
                int size = bfs.size();
                while(size--)
                {
                    int x = bfs.front().first, l = bfs.front().second;
                    bfs.pop();
                    int adjsize = adj[x].size();
                    if(adjsize==0) mx[j] = max(mx[j], l);
                    for(int k=0;k<adjsize;k++)
                    {
                        int nx = adj[x][k].first, nl = l+adj[x][k].second;
                        bfs.push({nx, nl});
                    }
                }
            }
        }
        sort(mx, mx+ssize);
        if(ssize==1) resmx = max(resmx, mx[ssize-1]);
        else resmx = max(resmx, mx[ssize-1]+mx[ssize-2]);
    }
    printf("%d", resmx);

    return 0;
}