#include <bits/stdc++.h>

using namespace std;

int a[301], cnt[301];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    if(n==3)
    {
        if(a[0]>a[1]) printf("%d", a[0]+a[2]);
        else printf("%d", a[1]+a[2]);
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        if(i==1)
        {
            a[i] += a[i-1];
            cnt[i] = cnt[i-1]+1;
        }
        else if(cnt[i-1]==1) a[i] += a[i-2];
        else
        {
            if(a[i-1]<a[i-2]) a[i] += a[i-2];
            else
            {
                a[i] += a[i-1];
                cnt[i] = cnt[i-1]+1;
            }
        }
    }
    printf("%d", a[n-1]);

    return 0;
}