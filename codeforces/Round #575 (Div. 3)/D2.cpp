#include <bits/stdc++.h>

using namespace std;

int a[200001];
int dp[3][200001];

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        for(int i=0;i<n;i++)
            dp[0][i] = dp[1][i] = dp[2][i] = 0;
        string s;
        cin >> s;
        for(int i=0;i<n;i++)
            if(s[i]=='R') a[i] = 0;
            else if(s[i]=='G') a[i] = 1;
            else if(s[i]=='B') a[i] = 2;
        for(int i=0;i<n;i++)
            if(a[i]==i%3) dp[0][i] = 1;
            else if(a[i]==(i+1)%3) dp[1][i] = 1;
            else if(a[i]==(i+2)%3) dp[2][i] = 1;
        int sum1 = 0, sum2 = 0, sum3 = 0;
        for(int i=0;i<k;i++)
        {
            sum1 += dp[0][i];
            sum2 += dp[1][i];
            sum3 += dp[2][i];
        }
        int mx = max(sum1, max(sum2, sum3));
        for(int i=k;i<n;i++)
        {
            sum1 -= dp[0][i-k];
            sum1 += dp[0][i];
            sum2 -= dp[1][i-k];
            sum2 += dp[1][i];
            sum3 -= dp[2][i-k];
            sum3 += dp[2][i];
            mx = max(mx, max(sum1, max(sum2, sum3)));
        }
        printf("%d\n", k-mx);
    }

    return 0;
}