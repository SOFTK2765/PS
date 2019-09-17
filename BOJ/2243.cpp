#include <bits/stdc++.h>

using namespace std;

int t[2000001];

void update(int pos, int val)
{
    for(t[pos += 1000000] += val;pos>1;pos /= 2)
        t[pos/2] = t[pos]+t[pos^1];
}

int query(int l, int r)
{
    int res = 0;
    for(l += 1000000, r += 1000000;l<r;l /= 2, r /= 2)
    {
        if(l&1) res += t[l++];
        if(r&1) res += t[--r];
    }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a, b, c;
        scanf(" %d", &a);
        if(a==1)
        {
            scanf(" %d", &b);
            int lo = 0, hi = 1000000;
            while(lo<hi)
            {
                int mid = (lo+hi)/2;
                if(query(0, mid+1)<b) lo = mid+1;
                else hi = mid;
            }
            printf("%d\n", hi);
            update(hi, -1);
        }
        else if(a==2)
        {
            scanf(" %d %d", &b, &c);
            update(b, c);
        }
    }

    return 0;
}