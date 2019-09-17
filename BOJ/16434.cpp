#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int> a[123457];

int main()
{
    int n, hatk;
    scanf("%d %d", &n, &hatk);
    for(int i=0;i<n;i++)
        scanf(" %d %d %d", &get<0>(a[i]), &get<1>(a[i]), &get<2>(a[i]));
    long long lo = 1, hi = 123456123456123456;
    while(lo<hi)
    {
        long long mid = (lo+hi)/2, nhatk = hatk, nhp = mid;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(get<0>(a[i])==1)
            {
                long long monster = (get<2>(a[i])-1)/nhatk+1, warrior = (nhp-1)/get<1>(a[i])+1;
                if(monster<=warrior) nhp -= ((monster-1)*get<1>(a[i]));
                else
                {
                    lo = mid+1;
                    break;
                }
            }
            else
            {
                nhatk += get<1>(a[i]);
                nhp += get<2>(a[i]);
                if(nhp>mid) nhp = mid;
            }
            if(i==n-1) hi = mid;
        }
    }
    printf("%lld", hi);

    return 0;
}