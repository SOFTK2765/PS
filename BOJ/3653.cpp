#include <bits/stdc++.h>

using namespace std;

int n, m;
int t[400001];
int data[100001];

void build()
{
    for(int i=0;i<n;i++)
        t[data[i+1] = i+2*m+n] = 1;
    for(int i=m+n-1;i>=(m+n)/2;i--)
        t[i] = (t[i*2]?1:0)+(t[i*2+1]?1:0);
    for(int i=(m+n)/2-1;i>0;i--)
        t[i] = t[i*2]+(t[i*2+1]);
}

void update(int pos, int val)
{
    for(t[pos]=val;pos>1;pos /= 2)
        t[pos/2] = t[pos]+t[pos^1];
}

int query(int l, int r)
{
    int res = 0;
    for(;l<r;l /= 2, r /= 2)
    {
        if(l&1) res += t[l++];
        if(r&1) res += t[--r];
    }
    return res;
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        scanf(" %d %d", &n, &m);
        memset(t, 0, sizeof(t));
        build();
        for(int i=0;i<m;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            printf("%d ", query(m+n, data[tmp]));
            update(data[tmp], 0);
            update(2*m+n-i-1, 1);
            data[tmp] = 2*m+n-i-1;
        }
        printf("\n");
    }

    return 0;
}