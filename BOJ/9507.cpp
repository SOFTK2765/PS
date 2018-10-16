#include <bits/stdc++.h>

using namespace std;

long long a[68];

int main()
{
    int t;
    scanf("%d", &t);
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for(int i=4;i<68;i++)
        a[i] = a[i-1]+a[i-2]+a[i-3]+a[i-4];
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        printf("%lld\n", a[n]);
    }

    return 0;
}