#include <bits/stdc++.h>

using namespace std;

int a[1001], dp[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<=n;i++)
    {
        int mx = 0;
        for(int j=1;j<=i-j;j++)
            mx = max(mx, dp[j]+dp[i-j]);
        dp[i] = max(mx, a[i]);
    }
    printf("%d", dp[n]);

    return 0;
}