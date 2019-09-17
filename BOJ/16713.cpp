#include <bits/stdc++.h>

using namespace std;

int a[1000001], xr[1000001];

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=1;i<=n;i++)
        xr[i] = xr[i-1]^a[i-1];
    int res = 0;
    for(int i=0;i<q;i++)
    {
        int s, e;
        scanf(" %d %d", &s, &e);
        res ^= (xr[e]^xr[s-1]);
    }
    printf("%d", res);

    return 0;
}