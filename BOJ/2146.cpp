#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[101][101];
bool visit[101][101];
int n, cnt = 1, bcnt = 0;

queue<pair<int, int>> bfs[2501];

void dfs(int x, int y)
{
    visit[y][x] = true;
    a[y][x] = cnt;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=n || a[ny][nx]==0 || visit[ny][nx]) continue;
        dfs(nx, ny);
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visit[i][j] && a[i][j]!=0)
            {
                dfs(j, i);
                cnt++;
            }
        }
    }
    for(int i=1;i<cnt;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                if(a[j][k]==i)
                {
                    bfs[i].push({k, j});
                    visit[j][k] = true;
                }
    while(1)
    {
        int sum = 0;
        for(int i=1;i<cnt;i++)
            sum += bfs[i].size();
        if(sum==0) break;
        for(int i=1;i<cnt;i++)
        {
            int size = bfs[i].size();
            while(size--)
            {
                int x = bfs[i].front().first;
                int y = bfs[i].front().second;
                bfs[i].pop();
                for(int j=0;j<4;j++)
                {
                    int nx = x+dx[j];
                    int ny = y+dy[j];
                    if(nx<0 || ny<0 || nx>=n || ny>=n) continue;
                    if(a[ny][nx]!=0 && a[ny][nx]!=i)
                    {
                        printf("%d", i>a[ny][nx]?bcnt*2+1:bcnt*2);
                        return 0;
                    }
                    if(a[ny][nx]!=0 || visit[ny][nx]) continue;
                    bfs[i].push({nx, ny});
                    a[ny][nx] = i;
                    visit[ny][nx] = true;
                }
            }
        }
        bcnt++;
    }
    printf("%d", bcnt*2+1);

    return 0;
}