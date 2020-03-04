#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int n, m, vsize, mn = 987654321;
int a[51][51];
vector<pair<int, int>> v;
bool check[11];
bool visit[51][51];

void f(int pos, int ni)
{
    if(pos==m)
    {
        memset(visit, 0, sizeof(visit));
        queue<pair<int, int>> bfs;
        for(int i=0;i<vsize;i++)
            if(check[i])
            {
                bfs.push({v[i].second, v[i].first});
                visit[v[i].first][v[i].second] = true;
            }
        int cnt = 0, tmpmx = 0;
        while(!bfs.empty())
        {
            cnt++;
            int size = bfs.size();
            while(size--)
            {
                int x = bfs.front().first, y = bfs.front().second;
                bfs.pop();
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=n || ny<0 || ny>=n || visit[ny][nx] || a[ny][nx]==1) continue;
                    if(a[ny][nx]==0) tmpmx = max(tmpmx, cnt);
                    bfs.push({nx, ny});
                    visit[ny][nx] = true;
                }
            }
        }
        bool flag = false;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(!visit[i][j] && a[i][j]==0) flag = true;
        if(!flag) mn = min(mn, tmpmx);
        return;
    }
    for(int i=ni;i<vsize;i++)
    {
        check[i] = true;
        f(pos+1, i+1);
        check[i] = false;
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==2) v.push_back({i, j});
        }
    vsize = v.size();
    f(0, 0);
    printf("%d\n", mn==987654321?-1:mn);

    return 0;
}