#include <bits/stdc++.h>

using namespace std;

int n;
pair<int, int> a[100001];
int t[200001];

void build()
{
    for(int i=n-1;i>0;i--)
        t[i] = t[i*2]+t[i*2+1];
}

void update(int pos)
{
    for(t[pos += n]=0;pos>1;pos /= 2)
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
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i].first);
        a[i].second = i;
    }
    sort(a, a+n);
    for(int i=0;i<n;i++)
        t[i+n] = 1;
    build();
    for(int i=0;i<(n+1)/2;i++)
    {
        printf("%d\n", query(0, a[i].second));
        update(a[i].second);
        if(i==n-i-1) break;
        printf("%d\n", query(a[n-i-1].second+1, n));
        update(a[n-i-1].second);
    }

    return 0;
}