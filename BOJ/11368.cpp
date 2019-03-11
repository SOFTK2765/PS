#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int c, w, l, p;
        scanf(" %d %d %d %d", &c, &w, &l, &p);
        if(c==0 && w==0 && l==0 && p==0) break;
        long long res = 1, tmp = c;
        for(int i=0;i<w;i++)
            res *= tmp;
        tmp = res;
        if(l==0) res = 1;
        for(int i=0;i<l-1;i++)
            res *= tmp;
        tmp = res;
        if(p==0) res = 1;
        for(int i=0;i<p-1;i++)
            res *= tmp;
        printf("%lld\n", res);
    }

    return 0;
}