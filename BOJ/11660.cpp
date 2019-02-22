#include <bits/stdc++.h>

using namespace std;

int a[1025][1025], dp[1025][1025];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            dp[i][j] = dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1]+a[i-1][j-1];
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2, tmp3, tmp4;
        scanf(" %d %d %d %d", &tmp1, &tmp2, &tmp3, &tmp4);
        printf("%d\n", dp[tmp3][tmp4]-dp[tmp1-1][tmp4]-dp[tmp3][tmp2-1]+dp[tmp1-1][tmp2-1]);
    }

    return 0;
}