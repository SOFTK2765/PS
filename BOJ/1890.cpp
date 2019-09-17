#include <bits/stdc++.h>

using namespace std;

int a[101][101];
long long dp[101][101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    dp[0][0] = 1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=0)
            {
                if(j+a[i][j]<n) dp[i][j+a[i][j]] += dp[i][j];
                if(i+a[i][j]<n) dp[i+a[i][j]][j] += dp[i][j];
            }
    printf("%lld", dp[n-1][n-1]);

    return 0;
}