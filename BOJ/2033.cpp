#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int d = 10;
    while(n/d)
    {
        if((n%d)/(d/10)>=5) n += d;
        n -= (n%d);
        d *= 10;
    }
    printf("%d", n);

    return 0;
}