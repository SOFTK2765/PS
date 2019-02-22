#include <bits/stdc++.h>

using namespace std;

int dp[31][31];

int main()
{
    int r, c, w;
    scanf("%d %d %d", &r, &c, &w);
    for(int i=1;i<r+w;i++)
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1]+dp[i-1][j];
        }
    int sum = 0;
    for(int i=r;i<r+w;i++)
        for(int j=c;j<c+i-r+1;j++)
            sum += dp[i][j];
    printf("%d", sum);

    return 0;
}