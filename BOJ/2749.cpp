#include <bits/stdc++.h>

using namespace std;

int f[10000000];

int main()
{
    f[0] = 0;
    f[1] = 1;
    long long n;
    scanf("%lld", &n);
    n %= 1500000;
    for(int i=2;i<1500000;i++)
        f[i] = (f[i-1]+f[i-2])%1000000;
    printf("%d", f[n]);

    return 0;
}