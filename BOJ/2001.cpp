#include <bits/stdc++.h>

using namespace std;

int jw[101];
bool visit[1<<15][101];

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<=100;i++)
        jw[i] = -1;
    for(int i=0;i<k;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        jw[tmp] = i;
    }
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        adj[tmp1].push_back({tmp2, tmp3});
        adj[tmp2].push_back({tmp1, tmp3});
    }
    queue<pair<int, unsigned int>> bfs;
    bfs.push({1, 0});
    visit[0][1] = true;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first;
            unsigned int jew = bfs.front().second;
            bfs.pop();
            int jewcnt = 0;
            for(int i=0;i<k;i++)
                if((jew>>i)&1) jewcnt++;
            int adjsize = adj[x].size();
            for(int i=0;i<adjsize;i++)
            {
                int nx = adj[x][i].first, nw = adj[x][i].second;
                unsigned int njew = jew+((jw[nx]!=-1 && !((jew>>jw[nx])&1))?(1<<jw[nx]):0);
                if(!visit[jew][nx] && jewcnt<=nw)
                {
                    bfs.push({nx, jew});
                    visit[jew][nx] = true;
                }
                if(!visit[njew][nx] && jewcnt<=nw)
                {
                    bfs.push({nx, njew});
                    visit[njew][nx] = true;
                }
            }
        }
    }
    int powk = 1<<k, mx = 0;
    for(int i=0;i<powk;i++)
    {
        if(visit[i][1])
        {
            int cnt = 0;
            for(int j=0;j<k;j++)
                if((i>>j)&1) cnt++;
            mx = max(mx, cnt);
        }
    }   
    printf("%d", mx);

    return 0;
}