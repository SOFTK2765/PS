#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    k = min(k, n-k);
    long long a = 1, b = 1;
    int p = 1000000007;
    for(int i=n-k+1;i<=n;i++)
        (a *= i) %= p;
    for(int i=1;i<=k;i++)
        (b *= i) %= p;
    long long res = 1;
    int pp = p-2;
    while(pp>0)
    {
        if(pp%2==1) (res *= b) %= p;
        (b *= b) %= p;
        pp /= 2;
    }
    (res *= a) %= p;
    printf("%lld", res);

    return 0;
}