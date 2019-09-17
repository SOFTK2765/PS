#include <bits/stdc++.h>

using namespace std;

int n;
long long t[200001];

void build()
{
    for(int i=n-1;i>0;i--)
        t[i] = t[i*2]+t[i*2+1];
}

void update(int pos, int val)
{
    for(t[pos += n]=val;pos>1;pos /= 2)
        t[pos/2] = t[pos]+t[pos^1];
}

long long query(int l, int r)
{
    long long res = 0;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l&1) res += t[l++];
        if(r&1) res += t[--r];
    }
    return res;
}

int main()
{
    int q;
    scanf("%d %d", &n, &q);
    for(int i=0;i<n;i++)
        scanf(" %lld", &t[i+n]);
    build();
    while(q--)
    {
        int x, y, a, b;
        scanf(" %d %d %d %d", &x, &y, &a, &b);
        if(x>y) swap(x, y);
        printf("%lld\n", query(x-1, y));
        update(a-1, b);
    }

    return 0;
}