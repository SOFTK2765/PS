#include <bits/stdc++.h>

#define MD 1234567

using namespace std;

int a[4][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}, {1, 0, 0}}, tmp[4][3];
int dp[1001];

int main()
{
    for(int i=1;i<=1000;i++)
    {
        for(int j=0;j<4;j++)
            for(int k=0;k<3;k++)
                (dp[i] += a[j][k]) %= MD;
        for(int j=0;j<4;j++)
            for(int k=0;k<3;k++)
                tmp[j][k] = a[j][k];
        a[0][0] = (tmp[0][1]+tmp[1][0])%MD;
        a[0][1] = (tmp[0][0]+tmp[1][1]+tmp[0][2])%MD;
        a[0][2] = (tmp[0][1]+tmp[1][2])%MD;
        a[1][0] = (tmp[0][0]+tmp[1][1]+tmp[2][0])%MD;
        a[1][1] = (tmp[0][1]+tmp[1][0]+tmp[1][2]+tmp[2][1])%MD;
        a[1][2] = (tmp[0][2]+tmp[1][1]+tmp[2][2])%MD;
        a[2][0] = (tmp[1][0]+tmp[2][1]+tmp[3][0])%MD;
        a[2][1] = (tmp[1][1]+tmp[2][0]+tmp[2][2])%MD;
        a[2][2] = (tmp[1][2]+tmp[2][1])%MD;
        a[3][0] = tmp[2][0];
    }
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf(" %d", &n);
        printf("%d\n", dp[n]);
    }

    return 0;
}