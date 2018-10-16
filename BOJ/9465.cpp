#include <bits/stdc++.h>

using namespace std;

int a[2][100001];
int dp[100001][3];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<2;i++)
            for(int j=0;j<n;j++)
                scanf(" %d", &a[i][j]);
        dp[0][0] = a[0][0];
        dp[0][1] = a[1][0];
        for(int i=1;i<n;i++)
        {
            dp[i][0] = (dp[i-1][1]<dp[i-1][2]?dp[i-1][2]:dp[i-1][1])+a[0][i];
            dp[i][1] = (dp[i-1][0]<dp[i-1][2]?dp[i-1][2]:dp[i-1][0])+a[1][i];
            dp[i][2] = (dp[i-1][0]<dp[i-1][1]?dp[i-1][1]:dp[i-1][0]);
        }
        int mx = 0;
        for(int i=0;i<3;i++)
            if(mx<dp[n-1][i]) mx = dp[n-1][i];
        printf("%d\n", mx);
    }

    return 0;
}