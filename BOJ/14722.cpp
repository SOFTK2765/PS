#include <bits/stdc++.h>

using namespace std;

int a[1001][1001], dp[1001][1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf(" %d", &a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            int tmp = max(dp[i-1][j], dp[i][j-1]);
            dp[i][j] = tmp+(tmp%3==a[i][j]?1:0);
        }
    printf("%d", dp[n][n]);

    return 0;
}