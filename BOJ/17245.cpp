#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main()
{
    int n;
    scanf("%d", &n);
    long long sum = 0;
    int mx = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            sum += a[i][j];
            mx = max(mx, a[i][j]);
        }
    sum = (sum+1)/2;
    int lo = 0, hi = mx;
    while(lo<hi)
    {
        int mid = (lo+hi)/2;
        long long tmpsum = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                tmpsum += a[i][j]<mid?a[i][j]:mid;
        if(tmpsum<sum) lo = mid+1;
        else hi = mid;
    }
    printf("%d", hi);

    return 0;
}