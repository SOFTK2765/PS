#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int> a[1000001];

int main()
{
    int n, k, d;
    scanf("%d %d %d", &n, &k, &d);
    int mn = 987654321;
    for(int i=0;i<k;i++)
    {
        scanf(" %d %d %d", &get<0>(a[i]), &get<1>(a[i]), &get<2>(a[i]));
        mn = min(mn, get<0>(a[i]));
    }
    int lo = mn, hi = n;
    while(lo<hi)
    {
        int mid = (lo+hi)/2;
        long long sum = 0;
        for(int i=0;i<k;i++)
        {
            int tmp = (min(mid, get<1>(a[i]))-get<0>(a[i]));
            if(tmp<0) continue;
            sum += (tmp/get<2>(a[i])+1);
        }
        if(sum>=d) hi = mid;
        else lo = mid+1;
    }
    printf("%d", lo);

    return 0;
}