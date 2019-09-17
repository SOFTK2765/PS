#include <bits/stdc++.h>

using namespace std;

int n;
int mnt[200001], mxt[200001];
int data[100001];

void build()
{
    for(int i=0;i<n;i++)
        data[i] = mnt[i+n] = mxt[i+n] = i;
    for(int i=n-1;i>0;i--)
    {
        mnt[i] = min(mnt[i*2], mnt[i*2+1]);
        mxt[i] = max(mxt[i*2], mxt[i*2+1]);
    }
}

void update(int pos, int val)
{
    for(mnt[pos]=mxt[pos += n]=val;pos>1;pos /= 2)
    {
        mnt[pos/2] = min(mnt[pos], mnt[pos^1]);
        mxt[pos/2] = max(mxt[pos], mxt[pos^1]);
    }
}

int query(int l, int r)
{
    int tmpl = l, tmpr = r, mn = 987654321, mx = 0;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l&1)
        {
            mn = min(mn, mnt[l]);
            mx = max(mx, mxt[l++]);
        }
        if(r&1)
        {
            mn = min(mn, mnt[--r]);
            mx = max(mx, mxt[r]);
        }
    }
    return (mn==tmpl && mx==tmpr-1);
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        memset(mnt, 0, sizeof(mnt));
        memset(mxt, 0, sizeof(mxt));
        int k;
        scanf(" %d %d", &n, &k);
        build();
        for(int i=0;i<k;i++)
        {
            int q, a, b;
            scanf(" %d %d %d", &q, &a, &b);
            if(q==0)
            {
                swap(data[a], data[b]);
                update(data[a], a);
                update(data[b], b);
            }
            else if(q==1) printf("%s\n", query(min(a, b), max(a, b)+1)?"YES":"NO");
        }
    }

    return 0;
}