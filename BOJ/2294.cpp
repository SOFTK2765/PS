#include <bits/stdc++.h>

using namespace std;

int coin[101];
int dp[10001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &coin[i]);
    sort(coin, coin+n);
    int cpos = 0;
    for(int i=1;i<=k;i++)
    {
        while(coin[cpos]<i) cpos++;
        if(cpos<n && coin[cpos]==i)
        {
            dp[i] = 1;
            cpos++;
        }
        else
        {
            int mn = 987654321;
            for(int j=1;j<=i/2;j++)
                if(dp[j]!=-1 && dp[i-j]!=-1) mn = min(mn, dp[j]+dp[i-j]);
            dp[i] = mn==987654321?-1:mn;
        }
    }
    printf("%d", dp[k]);

    return 0;
}