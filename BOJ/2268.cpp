#include <bits/stdc++.h>

using namespace std;

int n;
long long t[2000001];

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
    int m;
    scanf("%d %d", &n, &m);
    while(m--)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        if(tmp1==0)
        {
            if(tmp2>tmp3) swap(tmp2, tmp3);
            printf("%lld\n", query(tmp2-1, tmp3));
        }
        else if(tmp1==1) update(tmp2-1, tmp3);
    }

    return 0;
}