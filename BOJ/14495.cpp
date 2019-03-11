#include <bits/stdc++.h>

using namespace std;

long long dp[117];

int main()
{
    int n;
    scanf("%lld", &n);
    dp[1] = dp[2] = dp[3] = 1;
    for(int i=4;i<=n;i++)
        dp[i] = dp[i-1]+dp[i-3];
    printf("%lld", dp[n]);

    return 0;
}