#include <bits/stdc++.h>

using namespace std;

long long p, q;
map<long long, long long> mp;

long long f(long long x)
{
    if(mp[x]!=0) return mp[x];
    return mp[x] = f(x/p)+f(x/q);
}

int main()
{
    long long n;
    scanf("%lld %lld %lld", &n, &p, &q);
    mp[0] = 1;
    printf("%lld", f(n));

    return 0;
}