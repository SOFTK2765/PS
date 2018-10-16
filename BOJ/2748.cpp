#include <bits/stdc++.h>

using namespace std;

long long a[91];

int main()
{
    a[0] = 0;
    a[1] = 1;
    int n;
    scanf("%d", &n);
    for(int i=2;i<=n;i++)
        a[i] = a[i-1]+a[i-2];
    printf("%lld", a[n]);

    return 0;
}