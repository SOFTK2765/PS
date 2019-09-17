#include <bits/stdc++.h>

using namespace std;

int n;
pair<int, int> a[100001];
int t[200001];

void update(int pos, int val)
{
    for(t[pos += n]=val;pos>1;pos /= 2)
        t[pos/2] = max(t[pos], t[pos^1]);
}

int query(int l, int r)
{
    int res = 0;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l&1) res = max(res, t[l++]);
        if(r&1) res = max(res, t[--r]);
    }
    return res;
}

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first!=b.first) return a.first<b.first;
    return a.second>b.second;
}

int main()
{
    while(cin >> n)
    {
        for(int i=0;i<n;i++)
        {
            scanf(" %d", &a[i].first);
            a[i].second = i;
        }
        sort(a, a+n, cmp);
        memset(t, 0, sizeof(t));
        for(int i=0;i<n;i++)
            update(a[i].second, query(0, a[i].second)+1);
        printf("%d\n", t[1]);
    }

    return 0;
}