#include <bits/stdc++.h>

using namespace std;

int a[1001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=1;i<=n;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            a[i] = a[i-1]+tmp;
        }
        int mx = -1000;
        for(int i=0;i<n;i++)
            for(int j=i+1;j<=n;j++)
                mx = max(mx, a[j]-a[i]);
        printf("%d\n", mx);
    }

    return 0;
}