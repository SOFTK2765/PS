#include <bits/stdc++.h>

using namespace std;

int a[100001];

int f(int lo, int hi)
{
    if(lo==hi) return a[lo];
    int mid = (lo+hi)/2, left = -987654321, right = -987654321, sum = 0;
    for(int i=mid;i>=lo;i--)
    {
        sum += a[i];
        left = max(left, sum);
    }
    sum = 0;
    for(int i=mid+1;i<=hi;i++)
    {
        sum += a[i];
        right = max(right, sum);
    }
    int single = max(f(lo, mid), f(mid+1, hi));
    return max(left+right, single);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    sort(a, a+n);
    int m;
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        printf("%d\n", f(tmp1-1, tmp2-1));
    }

    return 0;
}