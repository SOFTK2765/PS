#include <bits/stdc++.h>

using namespace std;

int a[100001];

long long f(int l, int r)
{
    if(l==r) return (long long)a[l]*a[l];
    int mid = (l+r)/2;
    long long lres = f(l, mid), rres = f(mid+1, r);
    int posl = mid, posr = mid+1, mn = min(a[posl], a[posr]);
    long long sum = a[posl]+a[posr], mx = max(lres, rres);
    while(posl>l || posr<r)
    {
        if(posr==r || (posl>l && a[posl-1]>a[posr+1]))
        {
            mn = min(mn, a[--posl]);
            sum += a[posl];
        }
        else
        {
            mn = min(mn, a[++posr]);
            sum += a[posr];
        }
        mx = max(mx, mn*sum);
    }
    return mx;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    printf("%lld", f(0, n-1));

    return 0;
}