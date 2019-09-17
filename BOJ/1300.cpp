#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long lo = 1, hi = 10000000000;
    while(lo<hi)
    {
        long long mid = (lo+hi)/2, cnt = 0;
        for(int i=1;i<=n;i++)
            cnt += min((mid-1)/i, 1LL*n);
        if(cnt<k) lo = mid+1;
        else hi = mid;
    }
    printf("%d", hi-1);

    return 0;
}