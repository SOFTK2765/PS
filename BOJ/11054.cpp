#include <bits/stdc++.h>

using namespace std;

int a[1001], dp1[1001], dp2[1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int resmx = 0;
    for(int i=0;i<n;i++)
    {
        int mx = 0;
        for(int j=i-1;j>=0;j--)
            if(a[i]>a[j]) mx = max(mx, dp1[j]);
        dp1[i] = mx+1;
    }
    for(int i=0;i<n;i++)
        resmx = max(resmx, dp1[i]);
    for(int i=n-1;i>=0;i--)
    {
        int mx = 0;
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j]) mx = max(mx, dp2[j]);
        dp2[i] = mx+1;
    }
    for(int i=0;i<n;i++)
        resmx = max(resmx, dp2[i]);
    for(int i=0;i<n;i++)
        resmx = max(resmx, dp1[i]+dp2[i]-1);
    printf("%d", resmx);

    return 0;
}