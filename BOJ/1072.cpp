#include <bits/stdc++.h>

using namespace std;

int f(int x, int y, int z)
{
    int lo = 1, hi = 1000000000;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if((y+mid)*100LL/(x+mid)>=z+1)
            hi = mid-1;
        else if((y+mid)*100LL/(x+mid)<z+1)
            lo = mid+1;
    }
    return hi+1;
}

int main()
{
    int x, y;
    while(~scanf("%d %d", &x, &y))
    {
        int z;
        z = y*100LL/x;
        if(z>=99)
        {
            printf("%d", -1);
            continue;
        }
        printf("%d\n", f(x, y, z));
    }

    return 0;
}