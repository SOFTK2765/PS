#include <bits/stdc++.h>

using namespace std;

int mnt[200001], mxt[200001];
int n, m, k;

void build()
{
    for(int i=n-1;i>0;i--)
        mnt[i] = min(mnt[i*2], mnt[i*2+1]);
    for(int i=n-1;i>0;i--)
        mxt[i] = max(mxt[i*2], mxt[i*2+1]);
}

pair<int, int> query(int l, int r)
{
    int mn = 1987654321, mx = 0;
    for(l += n, r += n;l<r;l /= 2, r /= 2)
    {
        if(l & 1)
        {
            mn = min(mn, mnt[l]);
            mx = max(mx, mxt[l++]);
        }
        if(r & 1)
        {
            mn = min(mn, mnt[--r]);
            mx = max(mx, mxt[r]);
        }
    }
    return {mn, mx};
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        mnt[n+i] = mxt[n+i] = tmp;
    }
    build();
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        pair<int, int> res = query(tmp1-1, tmp2);
        printf("%d %d\n", res.first, res.second);
    }

    return 0;
}