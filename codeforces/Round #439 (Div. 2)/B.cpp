#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long c = b-a;
    if(a==b)
    {
        printf("%d", 1);

        return 0;
    }
    if(a==0) a=1;
    int result = 1;
    for(int i=0;i<c;i++)
    {
        result *= ((b-i)%10);
        result %= 10;
        if(result==0) break;
    }
    printf("%d", result);

    return 0;
}