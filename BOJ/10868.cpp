#include <bits/stdc++.h>

#define MAXN 100000

using namespace std;

int t[MAXN*2];
int n, m;

void build()
{
    for(int i=n-1;i>0;i--)
        t[i] = min(t[i*2], t[i*2+1]);
}

int query(int l, int r)
{
    int ans = t[l+n];
    for(l+=n, r+=n;l<r;l/=2, r/=2)
    {
        if(l & 1) ans = min(ans, t[l++]);
        if(r & 1) ans = min(ans, t[--r]);
    }
    return ans;
}

int main()
{

    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &t[n+i]);
    build();
    for(int i=0;i<m;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        printf("%d\n", query(a-1, b));
    }

    return 0;
}