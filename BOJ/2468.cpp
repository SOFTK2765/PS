#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[101][101];
bool visit[101][101];
int n;

void dfs(int h, int x, int y)
{
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=n || visit[ny][nx] || a[ny][nx]<=h) continue;
        visit[ny][nx] = true;
        dfs(h, nx, ny);
    }
}

int main()
{
    scanf("%d", &n);
    int hmx = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            hmx = max(a[i][j], hmx);
        }
    int mx = 0;
    for(int i=0;i<hmx;i++)
    {
        memset(visit, 0, sizeof(visit));
        int cnt = 0;
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                if(a[j][k]>i && !visit[j][k])
                {
                    visit[j][k] = true;
                    dfs(i, k, j);
                    cnt++;
                }
        mx = max(cnt, mx);
    }
    printf("%d", mx);

    return 0;
}