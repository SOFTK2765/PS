#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int n, m;
int a[8][8];
bool viruscheck[8][8], dfscheck[8][8];

vector<pair<int, int>> v, virus;
queue<pair<int, int>> bfs;

int dfs(int x, int y, int cnt)
{
    dfscheck[y][x] = true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx>=m || ny>=n || nx<0 || ny<0 || dfscheck[ny][nx] || a[ny][nx]!=0 || viruscheck[ny][nx]) continue;
        cnt = dfs(nx, ny, cnt);
    }
    return cnt+1;
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==0) v.push_back({i, j});
            else if(a[i][j]==2) virus.push_back({i, j});
        }
    int size = v.size(), mx = 0;
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            for(int k=j+1;k<size;k++)
            {
                a[v[i].first][v[i].second] = 1;
                a[v[j].first][v[j].second] = 1;
                a[v[k].first][v[k].second] = 1;
                memset(viruscheck, 0, sizeof(viruscheck));
                int virussize = virus.size();
                for(int l=0;l<virussize;l++)
                {
                    bfs.push({virus[l].first, virus[l].second});
                    viruscheck[virus[l].first][virus[l].second] = true;
                }
                while(!bfs.empty())
                {
                    int bfssize = bfs.size();
                    while(bfssize--)
                    {
                        int x = bfs.front().second, y = bfs.front().first;
                        bfs.pop();
                        for(int ind=0;ind<4;ind++)
                        {
                            int nx = x+dx[ind], ny = y+dy[ind];
                            if(nx>=m || ny>=n || nx<0 || ny<0 || viruscheck[ny][nx] || a[ny][nx]!=0) continue;
                            viruscheck[ny][nx] = true;
                            bfs.push({ny, nx});
                        }
                    }
                }
                memset(dfscheck, 0, sizeof(dfscheck));
                int sum = 0;
                for(int ind1=0;ind1<n;ind1++)
                    for(int ind2=0;ind2<m;ind2++)
                        if(a[ind1][ind2]==0 && !viruscheck[ind1][ind2] && !dfscheck[ind1][ind2]) sum += dfs(ind2, ind1, 0);
                mx = max(mx, sum);
                a[v[i].first][v[i].second] = 0;
                a[v[j].first][v[j].second] = 0;
                a[v[k].first][v[k].second] = 0;
            }
    printf("%d", mx);

    return 0;
}