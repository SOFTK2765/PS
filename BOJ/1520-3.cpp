#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[501][501], dp[501][501];

int m, n;

int f(int x, int y)
{
    if(dp[y][x]!=-1) return dp[y][x];
    int res = 0;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || nx>=n || ny<0 || ny>=m || a[ny][nx]>=a[y][x]) continue;
        res += f(nx, ny);
    }
    return dp[y][x] = res;
}

int main()
{
    scanf("%d %d", &m, &n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            dp[i][j] = -1;
    dp[m-1][n-1] = 1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    printf("%d", f(0, 0));

    return 0;
}