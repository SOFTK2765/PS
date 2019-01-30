#include <bits/stdc++.h>

using namespace std;

int n;
int a[1000001];

int bs(int a[], int target)
{
    int lo = 0, hi = 1000000000;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        long long sum = 0;
        for(int i=0;i<n;i++)
            sum += ((a[i]-mid)>0?(a[i]-mid):0);
        if(sum<target) hi = mid-1;
        else if(sum>target) lo = mid+1;
        else return mid;
    }
    return lo-1;
}

int main()
{
    int m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    printf("%d", bs(a, m));

    return 0;
}