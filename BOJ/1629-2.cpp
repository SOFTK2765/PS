#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    long long tmp = a, res = 1;
    while(b)
    {
        if(b%2) (res *= tmp) %= c;
        (tmp *= tmp) %= c;
        b /= 2;
    }
    printf("%lld", res);

    return 0;
}