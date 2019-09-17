#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[501][501], dp[501][501];

int n;

int f(int x, int y)
{
    int mx = 0;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || nx>=n || ny<0 || ny>=n || a[ny][nx]<=a[y][x]) continue;
        if(dp[ny][nx]!=0) mx = max(mx, dp[ny][nx]);
        else mx = max(mx, f(nx, ny));
    }
    return dp[y][x] = mx+1;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(dp[i][j]==0) f(j, i);
    int mx = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            mx = max(mx, dp[i][j]);
    printf("%d", mx);

    return 0;
}