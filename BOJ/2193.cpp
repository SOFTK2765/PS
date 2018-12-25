#include <bits/stdc++.h>

using namespace std;

long long a[91][2];

int main()
{
    int n;
    scanf("%d", &n);
    a[1][1] = 1;
    for(int i=2;i<=n;i++)
    {
        a[i][0] = a[i-1][0]+a[i-1][1];
        a[i][1] = a[i-1][0];
    }
    printf("%lld", a[n][0]+a[n][1]);

    return 0;
}