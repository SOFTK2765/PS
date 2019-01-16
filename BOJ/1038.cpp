#include <bits/stdc++.h>

using namespace std;

int dp[11][11];
int res[11];

int main()
{
    int n;
    scanf("%d", &n);
    if(n>=1023)
    {
        printf("-1");
        return 0;
    }
    dp[0][0] = 1;
    for(int i=1;i<10;i++)
    {
        dp[i][0] = 1;
        for(int j=1;j<i;j++)
            dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        dp[i][i] = 1;
    }
    int cnt = 0, i, j, pos = 0;
    bool flag = false;
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;j++)
        {
            if(cnt+dp[j][i]<=n) cnt += dp[j][i];
            else
            {
                res[pos++] = j;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    flag = false;
    for(i--;i>=0;i--)
    {
        for(j=i;j<res[pos-1];j++)
        {
            if(cnt+dp[j][i]<=n) cnt += dp[j][i];
            else
            {
                res[pos++] = j;
                flag = true;
                break;
            }
            if(j==res[pos-1]-1) res[pos++] = res[pos-1]-1;
        }
    }
    for(int i=0;i<pos;i++)
        printf("%d", res[i]);

    return 0;
}