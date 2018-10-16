#include <bits/stdc++.h>

using namespace std;

long long t[36] = {};

int main()
{
    t[0] = 1;
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        for(int j=0;j<i;j++)
            t[i] += t[j]*t[i-j-1];
    printf("%lld", t[n]);

    return 0;
}