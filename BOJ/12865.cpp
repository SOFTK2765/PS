#include <bits/stdc++.h>

using namespace std;

pair<int, int> a[100001];
int dp[101][100001];

int main()
{   
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d %d", &a[i].first, &a[i].second);
    sort(a, a+n);
    for(int i=1;i<=n;i++)
        dp[i][a[i-1].first] = a[i-1].second;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
        {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(j>=a[i-1].first) dp[i][j] = max(dp[i][j], dp[i-1][j-a[i-1].first]+a[i-1].second);
        }
    printf("%d", dp[n][k]);

    return 0;
}