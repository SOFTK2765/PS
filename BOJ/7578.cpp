#include <bits/stdc++.h>

using namespace std;

int a[500001];
int t[1000001];
int n;

void update(int pos)
{
    for(t[pos+=n]=1;pos>1;pos /= 2)
        t[pos/2] = t[pos]+t[pos^1];
}

int query(int l, int r)
{
    int res = 0;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l&1) res += t[l++];
        if(r&1) res += t[--r];
    }
    return res;
}

int main()
{
    scanf("%d", &n);
    map<int, int> mp;
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        mp[tmp] = i;
    }
    long long res = 0;
    for(int i=0;i<n;i++)
    {
        int ind = mp[a[i]];
        res += query(ind, n);
        update(ind);
    }
    printf("%lld", res);

    return 0;
}