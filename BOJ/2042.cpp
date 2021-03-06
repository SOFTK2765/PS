#include <bits/stdc++.h>

#define MAXN 1000000

using namespace std;

long long t[2*MAXN];
int n, m, k;

void build()
{
    for(int i=n-1;i>0;i--)
        t[i] = t[i*2]+t[i*2+1];
}

void modify(int pos, int val)
{
    for(t[pos+=n]=val;pos>1;pos/=2)
        t[pos/2] = t[pos]+t[pos^1];
}

long long query(int l, int r)
{
    long long ans = 0;
    for(l+=n, r+=n;l<r;l/=2, r/=2)
    {
        if(l & 1) ans += t[l++];
        if(r & 1) ans += t[--r];
    }
    return ans;
}

int main()
{
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++)
        scanf(" %d", &t[n+i]);
    build();
    for(int i=0;i<m+k;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        if(a==1) modify(b-1, c);
        else printf("%lld\n", query(b-1, c));
    }

    return 0;
}