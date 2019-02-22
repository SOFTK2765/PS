#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, n;
    scanf("%d %d %d", &r, &c, &n);
    printf("%lld", 1LL*((r-1)/n+1)*((c-1)/n+1));

    return 0;
}