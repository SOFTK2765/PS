#include <bits/stdc++.h>

using namespace std;

int n;
long long k, tmp;
long long dp[100][100][2];
bool flag;

long long f1(int pos, int pre)
{
    if(dp[n][pos][pre]!=-1) return dp[n][pos][pre];
    if(pos==n) return dp[n][pos][pre] = 1;
    dp[n][pos][pre] = 0;
    if(pre) dp[n][pos][pre] += f1(pos+1, 0);
    else dp[n][pos][pre] += f1(pos+1, 0)+f1(pos+1, 1);
    return dp[n][pos][pre];
}

void f2(int pos, int pre)
{
    printf("%d", pre);
    if(pos==n)
    {
        flag = true;
        return;
    }
    if(pre) f2(pos+1, 0);
    else
    {
        if(tmp+dp[n][pos+1][0]>=k) f2(pos+1, 0);
        else
        {
            tmp += dp[n][pos+1][0];
            f2(pos+1, 1);
        }
    }
    if(flag) return;
}

int main()
{
    scanf("%lld", &k);
    memset(dp, -1, sizeof(dp));
    for(n=1;n<=100;n++)
    {
        tmp += f1(1, 1);
        if(tmp>=k)
        {
            tmp -= f1(1, 1);
            f2(1, 1);
        }
        if(flag) break;
    }

    return 0;
}