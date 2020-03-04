#include <bits/stdc++.h>

using namespace std;

int n, m, k;
long long dp[11][221][221];
bool flag;

long long f1(int pos, int ni, int nsum)
{
    if(dp[pos][ni][nsum]!=-1) return dp[pos][ni][nsum];
    if(nsum>m) return 0;
    if(pos==n)
    {
        if(nsum==m) return dp[pos][ni][nsum] = 1;
        else return 0;
    }
    dp[pos][ni][nsum] = 0;
    for(int i=ni;nsum+i<=m;i++)
        dp[pos][ni][nsum] += f1(pos+1, i, nsum+i);
    return dp[pos][ni][nsum];
}

void f2(int pos, int ni, int nsum, long long dpsum)
{
    if(pos==n)
    {
        flag = true;
        return;
    }
    for(int i=ni;nsum+i<=m;i++)
        if(dp[pos+1][i][nsum+i]!=-1)
        {
            dpsum += dp[pos+1][i][nsum+i];
            if(dpsum>=k)
            {
                printf("%d ", i);
                f2(pos+1, i, nsum+i, dpsum-dp[pos+1][i][nsum+i]);
            }
            if(flag) return;
        }
}

int main()
{
    scanf("%d %d %d", &n, &m, &k);
    memset(dp, -1, sizeof(dp));
    f1(0, 1, 0);
    f2(0, 1, 0, 0);

    return 0;
}