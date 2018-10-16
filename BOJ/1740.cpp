#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    long long res = 0;
    long long tmp = 1;
    while(n>0)
    {
        res += ((n%2)*tmp);
        tmp *= 3;
        n /= 2;
    }
    printf("%lld", res);

    return 0;
}