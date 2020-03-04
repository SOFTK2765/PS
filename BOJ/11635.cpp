#include <bits/stdc++.h>

using namespace std;

tuple<int, int, int> extEuc(int a, int b)
{
    int q = a/b, r = a%b;
    if(r==0) return make_tuple(b, 0, 1);
    tuple<int, int, int> res = extEuc(b, r);
    return make_tuple(get<0>(res), get<2>(res), get<1>(res)-q*get<2>(res));
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int r, s, q;
        scanf(" %d %d %d", &r, &s, &q);
        tuple<int, int, int> res = extEuc(r, s);
        long long x0 = 1LL*q/get<0>(res)*get<1>(res), y0 = 1LL*q/get<0>(res)*get<2>(res), lo, hi;
        if(get<0>(res)<0) get<0>(res) *= -1;
        int sign = (get<0>(res)>0?1:-1);
        if(x0>0 && y0>0)
        {
            lo = 0, hi = 1000000000;
            while(lo+1<hi)
            {
                long long mid = (lo+hi)/2;
                (x0+s/get<0>(res)*mid>0 && y0-r/get<0>(res)*mid>0?lo:hi) = mid;
                printf("ss : %lld %lld\n", x0+s/get<0>(res)*mid, y0-r/get<0>(res)*mid);
            }
        }
        else
        {
            lo = -1000000000, hi = 0;
            while(lo+1<hi)
            {
                long long mid = (lo+hi)/2;
                (x0+s/get<0>(res)*mid<=0 || y0-r/get<0>(res)*mid<=0?lo:hi) = mid;
                printf("ss : %lld %lld\n", x0+s/get<0>(res)*mid, y0-r/get<0>(res)*mid);
            }
        }
        printf("%lld %lld\n", x0+s/get<0>(res)*lo, y0-r/get<0>(res)*lo);
    }

    return 0;
}