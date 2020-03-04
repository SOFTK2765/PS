#include <bits/stdc++.h>

using namespace std;

int n;
long long dp[101][101];

long long f1(int pos, int nn, long long num)
{
    if(num>987654321987654321) return 987654321987654321;
    if(dp[pos][nn]!=-1) return dp[pos][nn];
    if(nn>n) return 987654321987654321;
    if(nn==n) return dp[pos][nn] = num;
    dp[pos][nn] = 987654321987654321;
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+6, num*10+0));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+2, num*10+1));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+5, num*10+2));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+5, num*10+3));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+4, num*10+4));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+5, num*10+5));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+6, num*10+6));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+3, num*10+7));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+7, num*10+8));
    dp[pos][nn] = min(dp[pos][nn], f1(pos+1, nn+6, num*10+9));
    return dp[pos][nn];
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        scanf(" %d", &n);
        memset(dp, -1, sizeof(dp));
        long long res = 987654321987654321;
        res = min(res, f1(0, 2, 1));
        res = min(res, f1(0, 5, 2));
        res = min(res, f1(0, 5, 3));
        res = min(res, f1(0, 4, 4));
        res = min(res, f1(0, 5, 5));
        res = min(res, f1(0, 6, 6));
        res = min(res, f1(0, 3, 7));
        res = min(res, f1(0, 7, 8));
        res = min(res, f1(0, 6, 9));
        printf("%lld ", res);
        if(n%2)
        {
            printf("7");
            n -= 3;
        }
        for(int i=0;i<n/2;i++)
            printf("1");
        printf("\n");
    }

    return 0;
}