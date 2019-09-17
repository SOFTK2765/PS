#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        scanf(" %d", &a[i]);
        mx = max(mx, a[i]);
    }
    int lo = mx, hi = 1000000000;
    while(lo<hi)
    {
        int mid = (lo+hi)/2, sum = 0, cnt = 1;
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]<=mid) sum += a[i];
            else
            {
                sum = a[i];
                cnt++;
            }
        }
        if(cnt>m) lo = mid+1;
        else hi = mid;
    }
    printf("%d", lo);

    return 0;
}