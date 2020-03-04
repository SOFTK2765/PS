#include <bits/stdc++.h>

using namespace std;

int dp[101][101];
char res[201];
int n, m, k;

void f(int pos, int acnt, int zcnt, int cnt)
{
    if(cnt>=k) return;
    if(pos==n+m)
    {
        for(int i=0;i<n+m;i++)
            printf("%c", res[i]);
        return;
    }
    if(acnt==0)
    {
        res[pos] = 'z';
        f(pos+1, acnt, zcnt-1, cnt);
    }
    else if(cnt+dp[acnt-1][zcnt]<k)
    {
        res[pos] = 'z';
        f(pos+1, acnt, zcnt-1, cnt+dp[acnt-1][zcnt]);
    }
    else
    {
        res[pos] = 'a';
        f(pos+1, acnt-1, zcnt, cnt);
    }
}

int main()
{
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<=n;i++)
        dp[i][0] = 1;
    for(int i=0;i<=m;i++)
        dp[0][i] = 1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
            if(1000000000<dp[i][j]) dp[i][j] = 1000000001;
        }
    if(dp[n][m]<k) printf("-1");
    else f(0, n, m, 0);

    return 0;
}