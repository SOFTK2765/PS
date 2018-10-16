#include <bits/stdc++.h>

using namespace std;

int a[100001];

int f(int n, int m)
{
    int lo = 1, hi = 10000;
    int tmp = 0;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2-tmp;
        int sum = 0;
        int check = 0;
        int p = 0;
        for(int i=0;i<n;i++)
        {
            if(check==m-1 && i==n-1)
            {
                check++;
                if(sum+a[i]<mid) p = 1;
                else if(sum+a[i]==mid) p = 2;
                else p = 3;
                break;
            }
            if(sum+a[i]<mid)
            {
                sum += a[i];
                continue;
            }
            else
            {
                sum = a[i];
                check++;
                if(i==n-1) p = 1;
            }
        }
        if(p==1)
            tmp++;
        else if(p==2)
            return mid;
        else if(p==3)
            return mid+1;
        else if(check<m)
            hi = mid-1;
        else
            lo = mid+1;
    }
    return lo;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("%d", f(n, m));

    return 0;
}