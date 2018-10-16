#include <bits/stdc++.h>

using namespace std;

long long a[66][11] = {};

int main()
{
    for(int i=1;i<11;i++)
        a[0][i] = 1LL;
    for(int i=1;i<=64;i++)
    {
        for(int j=1;j<11;j++)
            a[i][j] = 1LL*a[i][j-1]+a[i-1][j];
    }
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", a[n][10]);
    }

    return 0;
}