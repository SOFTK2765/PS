#include <bits/stdc++.h>

using namespace std;

int dp[50001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i*i<=n;i++)
        dp[i*i] = 1;
    for(int i=1;i<=n;i++)
        if(dp[i]==0)
        {
            int mn = 987654321;
            for(int j=1;j*j<i;j++)
                mn = min(mn, dp[j*j]+dp[i-j*j]);
            dp[i] = mn;
        }
    printf("%d", dp[n]);

    return 0;
}