#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int res = min(n/2, m);
    while((n+m)-res*3<k) res--;
    printf("%d", res);

    return 0;
}