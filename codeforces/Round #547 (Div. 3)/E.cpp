#include <bits/stdc++.h>

using namespace std;

int a[200001], dp[200001];

int bs(int n, int sn)
{
    int lo = 0, hi = n-1;
    while(lo<=hi && 0<=lo && lo<n && 0<=hi && hi<n)
    {
        int mid = (lo+hi)/2;
        if(dp[mid]<=sn) hi = mid-1;
        else if(dp[mid]>sn) lo = mid+1;
    }
    return lo+1;
}

int main()
{
    long long h, n;
    scanf("%lld %lld", &h, &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    dp[0] = a[0];
    for(int i=1;i<n;i++)
        dp[i] = dp[i-1]+a[i];
    int mn = 98765321;
    for(int i=0;i<n;i++)
    {
        mn = min(mn, dp[i]);
        if(h+mn<=0)
        {
            printf("%d", i+1);
            return 0;
        }
    }
    if(dp[n-1]>=0)
    {
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++)
        printf("%d ", dp[i]);
    printf("\n");
    printf("%d\n", -dp[n-1]);
    int tmp = -((h+mn)%(-dp[n-1]));
    printf("%d\n", tmp);
    for(int i=0;i<n;i++)
        if(dp[i]<=tmp)
        {
            printf("%d", ((h+mn-1)/(-dp[n-1])+1)*n+i+1);
            break;
        }

    return 0;
}