#include <bits/stdc++.h>

using namespace std;

int dp[1000001];

int main()
{
    dp[2] = 1;
    dp[3] = 7;
    dp[4] = 4;
    int n;
    scanf("%d", &n);
    for(int i=5;i<=n;i++)
        dp[i] = dp[i-3]+7;
    printf("%d", dp[n]);

    return 0;
}