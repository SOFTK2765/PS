#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int c = a%b;
    while(c!=0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    return b;
}

int main()
{
    int n, m;
    char tmp;
    scanf("%d%c%d", &n, &tmp, &m);
    printf("%d%c%d", n/gcd(n, m), tmp, m/gcd(n, m));

    return 0;
}