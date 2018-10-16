#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if(a>b)
    {
        long long tmp = a;
        a = b;
        b = tmp;
    }
    printf("%lld", b*(b+1)/2-a*(a+1)/2+a);

    return 0;
}