#include <bits/stdc++.h>

#define MAXN 1000000

using namespace std;

int t[2*MAXN];
int n, m, k;
int mod = 1000000007;

void build()
{
    for(int i=n-1;i>0;i--)
        t[i] = (1LL*t[i*2]*t[i*2+1])%mod;
}

void modify(int pos, int val)
{
    for(t[pos+=n]=val;pos>1;pos/=2)
        t[pos/2] = (1LL*t[pos]*t[pos^1])%mod;
}

int query(int l, int r)
{
    int ans = 1;
    for(l+=n, r+=n;l<r;l/=2, r/=2)
    {
        if(l & 1) ans = (1LL*ans*t[l++])%mod;
        if(r & 1) ans = (1LL*ans*t[--r])%mod;
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
        else printf("%d\n", query(b-1, c));
    }

    return 0;
}