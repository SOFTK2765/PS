#include <bits/stdc++.h>

using namespace std;

int dp[11][11];

int main()
{
    int n;
    scanf("%d", &n);
    dp[0][0] = 1;
    for(int i=1;i<10;i++)
    {
        dp[i][0] = 1;
        for(int j=1;j<i;j++)
            dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        dp[i][i] = 1;
    }
    int cnt = 0;
    bool flag = false;
    int i, j;
    for(i=0;i<10 && !flag;i++)
        for(j=i;j<10;j++)
        {
            if(cnt+dp[j][i]<n) cnt += dp[j][i];
            else
            {
                flag = true;
                break;
            }
        }
    while(cnt<=n)
    {
        if(cnt==n)
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
            printf("%d ", dp[i][j]);
        printf("\n");
    }

    return 0;
}