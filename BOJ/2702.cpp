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
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        printf("%d %d\n", a*b/gcd(a, b), gcd(a, b));
    }

    return 0;
}