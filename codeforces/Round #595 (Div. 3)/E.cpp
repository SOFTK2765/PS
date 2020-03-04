#include <bits/stdc++.h>

using namespace std;

int dp[2][200001];

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    for(int i=1;i<n;i++)
        scanf(" %d", &dp[0][i]);
    for(int i=1;i<n;i++)
        scanf(" %d", &dp[1][i]);
    dp[1][1] += c;
    for(int i=2;i<n;i++)
    {
        dp[0][i] += min(dp[0][i-1], dp[1][i-1]);
        dp[1][i] += min(dp[0][i-1]+c, dp[1][i-1]);
    }
    for(int i=0;i<n;i++)
        printf("%d ", min(dp[0][i], dp[1][i]));

    return 0;
}