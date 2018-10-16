#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int n, k;
        scanf(" %d %d", &n, &k);
        k = min(k, n-k);
        if(n==0 && k==0) break;
        double a = 1, b = 1;
        for(int i=n-k+1;i<=n;i++) a *= i;
        for(int i=1;i<=k;i++) b *= i;
        printf("%.0lf\n", a/b);
    }

    return 0;
}