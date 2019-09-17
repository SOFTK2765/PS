#include <bits/stdc++.h>

using namespace std;

int n;
pair<int, pair<int, int>> a[500001];
int t[1000001];

void build()
{
    for(int i=n;i<2*n;i++)
        t[i] = 987654321;
    for(int i=n-1;i>0;i--)
        t[i] = min(t[i*2], t[i*2+1]);
}

void update(int pos, int val)
{
    for(t[pos += n]=val;pos>1;pos /= 2)
        t[pos/2] = min(t[pos], t[pos^1]);
}

int query(int l, int r)
{
    int res = 987654321;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l&1) res = min(res, t[l++]);
        if(r&1) res = min(res, t[--r]);
    }
    return res;
}

int main()
{
    scanf("%d", &n);
    int tmp;
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &tmp);
        a[tmp].first = i;
    }
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &tmp);
        a[tmp].second.first = i;
    }
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &tmp);
        a[tmp].second.second = i;
    }
    sort(a+1, a+n+1);
    int cnt = 0;
    build();
    for(int i=1;i<=n;i++)
    {
        int qres = query(0, a[i].second.first);
        if(qres==987654321 || qres>a[i].second.second) cnt++;
        update(a[i].second.first, a[i].second.second);
    }
    printf("%d", cnt);

    return 0;
}