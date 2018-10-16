#include <bits/stdc++.h>

using namespace std;

int a[200001];

int f(int n, int c)
{
    int lo = 1, hi = a[n-1]-a[0];
    int min;
    while(lo<=hi)
    {
        int mid = (lo+hi)/2;
        min = a[n-1];
        int tmp = 0;
        int check = 0;
        int p = 0;
        int i;
        for(i=1;i<n;i++)
        {
            tmp += a[i]-a[i-1];
            if(tmp<mid) continue;
            else
            {
                if(tmp<min) min=tmp;
                tmp = 0;
                check++;
                if(check==c-1) break;
            }
            if(i==n-1)
            {
                hi = mid-1;
                p = 1;
            }
        }
        if(check<c-1)
        {
            hi = mid-1;
            continue;
        }
        if(a[n-1]-a[i]==0 && p==0)
            return min;
        else if(p!=1);
            lo = mid+1;
    }
    return min;
}

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    printf("%d", f(n, c));

    return 0;
}