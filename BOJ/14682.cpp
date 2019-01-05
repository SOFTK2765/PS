#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int res = n;
    while(k--)
    {
        n *= 10;
        res += n;
    }
    printf("%d", res);

    return 0;
}