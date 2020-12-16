#include <bits/stdc++.h>

using namespace std;

tuple<long long, long long, long long> extEuc(long long a, long long b)
{
    long long q = a/b, r = a%b;
    if(r==0) return {b, 0, 1};
    tuple<long long, long long, long long> res = extEuc(b, r);
    return {get<0>(res), get<2>(res), get<1>(res)-q*get<2>(res)};
}

int main()
{
    long long a, b, s;
    scanf("%lld %lld %lld", &a, &b, &s);
    tuple<long long, long long, long long> res = extEuc(a, b);
    if(get<1>(res)<0 || get<2>(res)<0 || ((s%get<0>(res))%a!=0 && (s%get<0>(res))%b!=0)) printf("NO");
    else printf("YES");
    cout << get<0>(res) << " " << get<1>(res) << " " << get<2>(res);

    return 0;
}