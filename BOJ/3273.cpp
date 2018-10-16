#include <bits/stdc++.h>

using namespace std;

int a[100001];
int cnt = 0;

void f(int n, int x)
{
    int lo = 0, hi = n-1;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(a[mid]+a[n]==x)
        {
            cnt++;
            return;
        }
        else if(a[mid]+a[n]<x)
            lo = mid+1;
        else
            hi = mid-1;
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    int x;
    scanf("%d", &x);
    for(int i=1;i<n;i++)
        f(i, x);
    printf("%d", cnt);

    return 0;
}