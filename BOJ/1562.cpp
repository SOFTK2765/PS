#include <bits/stdc++.h>

using namespace std;

int dp[11][101][1<<11];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<10;i++)
        for(int j=0;j<=n;j++)
            for(int k=0;k<(1<<11);k++)
                dp[i][j][k] = -1;
    for(int i=1;i<10;i++)
        dp[i][1][1<<i] = 1;
    int r = (1<<10);
    for(int i=2;i<=n;i++)
        for(int j=0;j<10;j++)
        {
            if(j-1>=0)
            {
                for(int k=0;k<r;k++)
                    if(dp[j-1][i-1][k]!=-1)
                    {
                        if(dp[j][i][k+(!((k>>j)&1)<<j)]==-1) dp[j][i][k+(!((k>>j)&1)<<j)] = 0;
                        dp[j][i][k+(!((k>>j)&1)<<j)] = (dp[j][i][k+(!((k>>j)&1)<<j)]+dp[j-1][i-1][k])%1000000000;
                    }
            }
            if(j+1<10)
            {
                for(int k=0;k<r;k++)
                    if(dp[j+1][i-1][k]!=-1)
                    {
                        if(dp[j][i][k+(!((k>>j)&1)<<j)]==-1) dp[j][i][k+(!((k>>j)&1)<<j)] = 0;
                        dp[j][i][k+(!((k>>j)&1)<<j)] = (dp[j][i][k+(!((k>>j)&1)<<j)]+dp[j+1][i-1][k])%1000000000;
                    }
            }
        }
    int sum = 0;
    for(int i=0;i<10;i++)
        if(dp[i][n][1023]!=-1) sum = (sum+dp[i][n][1023])%1000000000;
    printf("%d", sum);

    return 0;
}