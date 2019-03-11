#include <bits/stdc++.h>

using namespace std;

int dp[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    dp[0][0] = 1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            dp[i][j] = (((dp[i][j-1]+dp[i-1][j])%1000000007)+dp[i-1][j-1])%1000000007;
    printf("%d", dp[n][m]);

    return 0;
}