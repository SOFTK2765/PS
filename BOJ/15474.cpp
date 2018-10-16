#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    if((((n-1)/a)+1)*b<(((n-1)/c)+1)*d) printf("%d", (((n-1)/a)+1)*b);
    else printf("%d", (((n-1)/c)+1)*d);

    return 0;
}