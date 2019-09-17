#include <bits/stdc++.h>

using namespace std;

int dp[101][101][101];

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    int al = a.length(), bl = b.length(), cl = c.length();
    for(int i=1;i<=al;i++)
        for(int j=1;j<=bl;j++)
            for(int k=1;k<=cl;k++)
                if(a[i-1]==b[j-1] && b[j-1]==c[k-1]) dp[i][j][k] = dp[i-1][j-1][k-1]+1;
                else dp[i][j][k] = max(max(dp[i-1][j][k], dp[i][j-1][k]), dp[i][j][k-1]);
    printf("%d", dp[al][bl][cl]);

    return 0;
}