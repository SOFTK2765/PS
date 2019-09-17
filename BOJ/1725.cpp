#include <bits/stdc++.h>

using namespace std;

int a[100001];

int f(int l, int r)
{
    if(l==r) return a[l];
    int mid = (l+r)/2, lres = f(l, mid), rres = f(mid+1, r), posl = mid, posr = mid+1, res = max(lres, rres), mn = min(a[posl], a[posr]);
    res = max(res, mn*(posr-posl+1));
    while(posl>l || posr<r)
        if(posr==r || (posl>l && a[posl-1]>a[posr+1]))
        {
            mn = min(mn, a[--posl]);
            res = max(res, mn*(posr-posl+1));
        }
        else
        {
            mn = min(mn, a[++posr]);
            res = max(res, mn*(posr-posl+1));
        }
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    printf("%d", f(0, n-1));

    return 0;
}