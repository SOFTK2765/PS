#include <bits/stdc++.h>

using namespace std;

int a[101];
long long dp[101][21];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    dp[0][a[0]] = 1;
    for(int i=1;i<n-1;i++)
    {
        for(int j=0;j<21-a[i];j++)
            dp[i][j+a[i]] += dp[i-1][j];
        for(int j=a[i];j<21;j++)
            dp[i][j-a[i]] += dp[i-1][j];
    }
    printf("%lld", dp[n-2][a[n-1]]);

    return 0;
}