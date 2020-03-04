#include <bits/stdc++.h>

using namespace std;

bool visit[100001];

int main()
{
    int v;
    scanf("%d", &v);
    vector<vector<pair<int, int>>> adj(v+1);
    for(int i=0;i<v;i++)
    {
        int tmp1;
        scanf(" %d", &tmp1);
        while(1)
        {
            int tmp2, d;
            scanf(" %d", &tmp2);
            if(tmp2==-1) break;
            scanf(" %d", &d);
            adj[tmp1].push_back({tmp2, d});
        }
    }
    queue<pair<int, int>> bfs;
    int n1size = adj[1].size();
    visit[1] = true;
    for(int i=0;i<n1size;i++)
    {
        bfs.push({adj[1][i].first, adj[1][i].second});
        visit[adj[1][i].first] = true;
    }
    int mx = 0;
    vector<pair<int, int>> tmpv;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first, d = bfs.front().second, adjsize = adj[x].size();
            bfs.pop();
            if(mx<=d)
            {
                mx = d;
                tmpv.push_back({x, mx});
            }
            for(int i=0;i<adjsize;i++)
            {
                int nx = adj[x][i].first, nd = adj[x][i].second;
                if(visit[nx]) continue;
                visit[nx] = true;
                bfs.push({nx, d+nd});
            }
        }
    }
    int tmpvsize = tmpv.size();
    for(int i=0;i<tmpvsize;i++)
        if(tmpv[i].second==mx)
        {
            memset(visit, 0, sizeof(visit));
            int adjtmpvsize = adj[tmpv[i].first].size();
            visit[tmpv[i].first] = true;
            for(int j=0;j<adjtmpvsize;j++)
            {
                bfs.push({adj[tmpv[i].first][j].first, adj[tmpv[i].first][j].second});
                visit[adj[tmpv[i].first][j].first] = true;
            }
            while(!bfs.empty())
            {
                int size = bfs.size();
                while(size--)
                {
                    int x = bfs.front().first, d = bfs.front().second, adjsize = adj[x].size();
                    bfs.pop();
                    mx = max(mx, d);
                    for(int i=0;i<adjsize;i++)
                    {
                        int nx = adj[x][i].first, nd = adj[x][i].second;
                        if(visit[nx]) continue;
                        visit[nx] = true;
                        bfs.push({nx, d+nd});
                    }
                }
            }
        }
    printf("%d", mx);

    return 0;
}