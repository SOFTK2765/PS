#include <bits/stdc++.h>

using namespace std;

int a[1001], dp[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(int i=0;i<n;i++)
    {
        int mx = 0;
        for(int j=i-1;j>=0;j--)
            if(a[i]>a[j]) mx = max(mx, dp[j]);
        dp[i] = mx+a[i];
    }
    int mx = 0;
    for(int i=0;i<n;i++)
        mx = max(mx, dp[i]);
    printf("%d", mx);

    return 0;
}