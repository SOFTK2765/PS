#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b)
{
    long long c = a%b;
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
    long long n = gcd(a, b);
    for(long long i=0;i<n;i++)
        printf("%d", 1);

    return 0;
}