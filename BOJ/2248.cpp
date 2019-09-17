#include <bits/stdc++.h>

using namespace std;

int dp[32][32];

int main()
{
    int n, l, ind;
    scanf("%d %d %d", &n, &l, &ind);
    for(int i=0;i<32;i++)
        dp[0][i] = 1;
    for(int i=1;i<=l;i++)
    {
        dp[i][i] = 1;
        for(int j=i+1;j<=n;j++)
            dp[i][j] = dp[i-1][j-1]+dp[i][j-1];
    }
    ind--;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=l;j>=0;j--)
            sum += dp[j][n-i-1];
        if(l==0 || sum>ind) printf("0");
        else
        {
            ind -= sum;
            l--;
            printf("1");
        }
    }

    return 0;
}