#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf(" %d", &a);
        b = a%10;
        a /= 10;
        long long tmp = 1;
        for(int i=0;i<b;i++)
            tmp *= a;
        sum += tmp;
    }
    printf("%lld", sum);

    return 0;
}