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
    printf("%lld\n", b-a-1<0?0:b-a-1);
    for(long long i=a+1;i<b;i++)
        printf("%lld ", i);

    return 0;
}