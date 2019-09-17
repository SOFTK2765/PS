#include <bits/stdc++.h>

using namespace std;

int a[1001][1001], dp[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%1d", &a[i][j]);
    int mx = 0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j])
            {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
                mx = max(mx, dp[i][j]);
            }
    printf("%d", mx*mx);

    return 0;
}