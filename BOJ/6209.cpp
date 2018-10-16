#include <bits/stdc++.h>

using namespace std;

int a[50003] = {};

int f(int d, int n, int m)
{
    int lo = 1, hi = d;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        int sum = 0;
        int check = 0;
        for(int i=1;i<n;i++)
        {
            if(sum>mid)
            {
                
                continue;
            }
            sum += a[i]-a[i-1];
            if(sum<mid) continue;
            sum = a[i]-a[i-1];
            check++;

            if(check == m) 
        }
    }
}

// 바이너리 서치 알고리즘을 for문안으로 

int main()
{
    int d, n, m;
    scanf("%d %d %d", &d, &n, &m);
    for(int i=1;i<=n;i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    a[n] = d;
    f(d, n, m);

    return 0;
}