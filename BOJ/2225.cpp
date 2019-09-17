#include <bits/stdc++.h>

using namespace std;

int dp[402][201];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n+k;i++)
        for(int j=1;j<=i;j++)
            if(j==1 || j==i) dp[i][j] = 1;
            else dp[i][j] = (dp[i-1][j-1]+dp[i-1][j])%1000000000;
    printf("%d", dp[n+k][k]);

    return 0;
}