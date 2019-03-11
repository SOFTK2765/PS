#include <bits/stdc++.h>

using namespace std;

int a[1001][1001], dp[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf(" %d", &a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])+a[i][j];
    printf("%d", dp[n][m]);

    return 0;
}