#include <bits/stdc++.h>

using namespace std;

int n;
long long cntt[400001], sumt[400001];

void update(int pos, long long val)
{
    for(cntt[pos += 200000] += 1, sumt[pos] += val;pos>1;pos /= 2)
    {
        cntt[pos/2] = cntt[pos]+cntt[pos^1];
        sumt[pos/2] = sumt[pos]+sumt[pos^1];
    }
}

pair<long long, long long> query(int l, int r)
{
    long long rescnt = 0, ressum = 0;
    for(l += 200000, r += 200000;l<r;l /= 2, r /= 2)
    {
        if(l&1)
        {
            rescnt += cntt[l];
            ressum += sumt[l++];
        }
        if(r&1)
        {
            rescnt += cntt[--r];
            ressum += sumt[r];
        }
    }
    return {rescnt, ressum};
}

int main()
{
    scanf("%d", &n);
    long long res = 1, tmp;
    scanf(" %lld", &tmp);
    update(tmp, tmp);
    for(int i=1;i<n;i++)
    {
        scanf(" %lld", &tmp);
        update(tmp, tmp);
        pair<long long, long long> qres1 = query(0, tmp), qres2 = query(tmp+1, 200001);
        res *= ((qres1.first*tmp-qres1.second-qres2.first*tmp+qres2.second)%1000000007);
        res %= 1000000007;
    }
    printf("%lld", res);

    return 0;
}