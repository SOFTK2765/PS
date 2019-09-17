#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool a[101][101], visit[101][101];
int n, m;

int dfs(int x, int y)
{
    visit[y][x] = true;
    int res = 1;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || nx>=m || ny<0 || ny>=n || !a[ny][nx] || visit[ny][nx]) continue;
        res += dfs(nx, ny);
    }
    return res;
}

int main()
{
    int k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<k;i++)
    {
        int r, c;
        scanf(" %d %d", &r, &c);
        a[r-1][c-1] = true;
    }
    int mx = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j] && !visit[i][j]) mx = max(mx, dfs(j, i));
    printf("%d", mx);

    return 0;
}