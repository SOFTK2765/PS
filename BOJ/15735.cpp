#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld", n%2==0?n*(n+2)*(2*n+1)/8:(n+1)*(2*n*n+3*n-1)/8);

    return 0;
}