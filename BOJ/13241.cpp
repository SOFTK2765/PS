#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int c = a%b;
    while(c!=0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a*b/gcd(a, b));

    return 0;
}