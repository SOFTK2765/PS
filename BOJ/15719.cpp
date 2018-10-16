#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    long long sum = -n*(n-1)/2;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        sum += tmp;
    }
    printf("%lld", sum);

    return 0;
}