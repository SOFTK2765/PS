#include <bits/stdc++.h>

using namespace std;

int a[51], dp[51];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        for(int i=0;i<n;i++)
        {
            int mx = 0;
            for(int j=i-1;j>=0;j--)
                if(a[i]>a[j]) mx = max(mx, dp[j]);
            dp[i] = mx+1;
        }
        int mx = 0;
        for(int i=0;i<n;i++)
            mx = max(mx, dp[i]);
        printf("Case #%d: %d\n", tc, n-mx);
    }

    return 0;
}