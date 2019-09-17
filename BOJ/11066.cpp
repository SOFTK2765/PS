#include <bits/stdc++.h>

using namespace std;

int dp[501][501];
int sum[501];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int k;
        scanf(" %d", &k);
        for(int i=0;i<k;i++)
            for(int j=0;j<k;j++)
                dp[i][j] = 0;
        for(int i=1;i<=k;i++)
            scanf(" %d", &sum[i]);
        for(int i=1;i<=k;i++)
            sum[i] += sum[i-1];
        for(int i=1;i<k;i++)
            for(int j=0;j<k-i;j++)
            {
                int mn = 987654321;
                for(int l=0;l<i;l++)
                    mn = min(mn, dp[j][j+l]+dp[j+l+1][j+i]+(sum[j+i+1]-sum[j]));
                dp[j][j+i] = mn;
            }
        printf("%d\n", dp[0][k-1]);
    }

    return 0;
}