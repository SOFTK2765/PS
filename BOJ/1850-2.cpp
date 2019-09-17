#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){return a%b?gcd(b, a%b):b;}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long n = gcd(a, b);
    while(n--) printf("1");

    return 0;
}