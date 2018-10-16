#include <bits/stdc++.h>

using namespace std;

long long a[100001];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        int p;
        scanf(" %d", &p);
        long long mx = 0;
        for(int j=0;j<p;j++)
        {
            long long x, y;
            scanf(" %lld %lld", &x, &y);
            if(mx<x*x+y*y) mx = x*x+y*y;
        }
        a[i] = mx;
    }
    sort(a, a+n);
    printf("%.2lf", (double)a[k-1]);

    return 0;
}