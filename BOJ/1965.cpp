#include <bits/stdc++.h>

using namespace std;

int a[1001], dp[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int res = 0;
    for(int i=0;i<n;i++)
    {
        int mx = 0;
        for(int j=i-1;j>=0;j--)
            if(a[i]>a[j]) mx = max(mx, dp[j]);
        dp[i] = mx+1;
        res = max(res, dp[i]);
    }
    printf("%d", res);

    return 0;
}