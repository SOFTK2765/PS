#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    scanf("%d", &q);
    for(int i=0;i<q;i++)
    {
        long long n;
        int a, b;
        scanf(" %lld %d %d", &n, &a, &b);
        if(2*a<b) printf("%lld\n", n*a);
        else printf("%lld\n", (n/2)*b+a*(n%2));
    }

    return 0;
}