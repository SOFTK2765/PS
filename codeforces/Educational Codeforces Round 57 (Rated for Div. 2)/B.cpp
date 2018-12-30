#include <bits/stdc++.h>

using namespace std;

char a[200001];

int main()
{
    int n;
    scanf("%d %s", &n, a);
    int l = strlen(a), lcnt = 0;
    char f = a[0];
    for(int i=0;i<n;i++)
    {
        if(f!=a[i]) break;
        if(i==n-1)
        {
            printf("%lld", (long long)n*(n+1)%998244353);
            return 0;
        }
    }
    for(int i=0;i<l;i++)
    {
        if(f==a[i]) lcnt++;
        else break;
    }
    int rcnt = 0;
    f = a[l-1];
    for(int i=l-1;i>=0;i--)
    {
        if(f==a[i]) rcnt++;
        else break;
    }
    if(a[0]==a[l-1]) printf("%lld", (long long)(lcnt+1)*(rcnt+1)%998244353);
    else printf("%d", lcnt+rcnt+1);

    return 0;
}