#include <bits/stdc++.h>

using namespace std;

int a[1000001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    long long lo = 0, hi = 1000000000000;
    while(lo<=hi)
    {
        long long mid = (lo+hi)/2, b = 0;
        for(int i=0;i<n;i++)
            b += (mid/a[i]);
        if(m<=b) hi = mid-1;
        else if(m>b) lo = mid+1;
    }
    printf("%lld", hi+1);

    return 0;
}