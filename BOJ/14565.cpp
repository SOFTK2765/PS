#include <bits/stdc++.h>

using namespace std;

tuple<long long, long long, long long> extEuc(long long a, long long b)
{
    long long q = a/b, r = a%b;
    if(r==0) return make_tuple(b, 0, 1);
    tuple<long long, long long, long long> res = extEuc(b, r);
    return make_tuple(get<0>(res), get<2>(res), get<1>(res)-q*get<2>(res));
}

int main()
{
    long long n, a;
    scanf("%lld %lld", &n, &a);
    tuple<long long, long long, long long> res = extEuc(n, a);
    printf("%lld %lld", n-a, get<0>(res)==1?(get<2>(res)+n)%n:-1);

    return 0;
}