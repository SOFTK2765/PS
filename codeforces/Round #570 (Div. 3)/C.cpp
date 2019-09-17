#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    while(q--)
    {
        int k, n, a, b;
        scanf(" %d %d %d %d", &k, &n, &a, &b);
        int lo = 0, hi = n;
        while(lo<=hi)
        {
            int mid = (lo+hi)/2;
            long long tmp = 1LL*mid*a+1LL*(n-mid)*b;
            if(tmp<k) lo = mid+1;
            else hi = mid-1;
        }
        printf("%d\n", lo-1);
    }

    return 0;
}