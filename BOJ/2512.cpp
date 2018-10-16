#include <bits/stdc++.h>

using namespace std;

int a[10001];

int f(int n, int m)
{
    int lo=1, hi=a[n-1];
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<mid) sum+=a[i];
            else sum+=mid;
        }
        if(sum==m)
            return mid;
        else if(sum>m)
            hi=mid-1;
        else
            lo=mid+1;
    }
    return lo-1;
}

int main()
{
    int n, m;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    scanf("%d", &m);
    printf("%d", f(n, m));

    return 0;
}