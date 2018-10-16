#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long res = 1;
    for(int i=0;i<n;i++)
    {
        int tmp;
        scanf(" %d", &tmp);
        res = (res*(tmp%m))%m;
    }
    printf("%lld", res);

    return 0;
}