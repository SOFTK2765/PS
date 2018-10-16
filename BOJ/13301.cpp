#include <bits/stdc++.h>

using namespace std;

long long a[81];

int main()
{
    int n;
    scanf("%d", &n);
    a[1] = a[2] = 1;
    for(int i=3;i<=n;i++)
        a[i] = a[i-1]+a[i-2];
    printf("%lld", (2*a[n]+a[n-1])*2);

    return 0;
}