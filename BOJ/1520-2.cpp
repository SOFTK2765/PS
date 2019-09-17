#include <bits/stdc++.h>

using namespace std;

int a[501][501], dp[501][501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    dp[0][0] = 1;
    for(int i=1;i<m;i++)
        if(a[i][0]<a[i-1][0]) dp[i][0] = 1;
        else break;
    for(int i=1;i<n;i++)
        if(a[0][i]<a[0][i-1]) dp[0][i] = 1;
    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
        {
            if(a[j][i]<a[j][i-1]) dp[j][i] += dp[j][i-1];
            if(a[j][i]<a[j-1][i]) dp[j][i] += dp[j-1][i];
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ", dp[i][j]);
        printf("\n");
    }
    //printf("%d", dp[n-1][m-1]);

    return 0;
}