#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l;
    scanf("%d %d %d", &n, &k, &l);
    int r = 1, d = 2;
    while(1)
    {
        if((k-1)/d==(l-1)/d) break;
        r++;
        d *= 2;
    }
    printf("%d", r);

    return 0;
}