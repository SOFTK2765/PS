#include <bits/stdc++.h>

using namespace std;

int a[10001], dp[10001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    if(n==1) printf("%d", a[0]);
    else if(n==2) printf("%d", a[0]+a[1]);
    else if(n==3) printf("%d", max(a[0]+a[2], max(a[1]+a[2], a[0]+a[1])));
    else if(n>=4)
    {
        dp[0] = a[0];
        dp[1] = a[0]+a[1];
        dp[2] = max(dp[1], max(a[0]+a[2], a[1]+a[2]));
        for(int i=3;i<n;i++)
            dp[i] = max(dp[i-1], max(dp[i-3]+a[i-1]+a[i], dp[i-2]+a[i]));
        printf("%d", dp[n-1]);
    }

    return 0;
}