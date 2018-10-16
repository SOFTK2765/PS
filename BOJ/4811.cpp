#include <bits/stdc++.h>

using namespace std;

long long a[32];

int main()
{
    a[1] = 1;
    for(int i=2;i<=30;i++)
        a[i] = 1LL*a[i-1]*(4*i-2)/(i+1);
    while(1)
    {
        int n;
        scanf("%d", &n);
        if(n==0) break;
        printf("%lld\n", a[n]);
    }

    return 0;
}