#include <bits/stdc++.h>

using namespace std;

int a[21];
int dp[10001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int m;
        scanf(" %d", &m);
        for(int i=0;i<=m;i++)
            dp[i] = 0;
        dp[0] = 1;
        for(int i=0;i<n;i++)
            for(int j=a[i];j<=m;j++)
                dp[j] += dp[j-a[i]];
        printf("%d\n", dp[m]);
    }

    return 0;
}