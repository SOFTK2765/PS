#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int res = min(a, b);
    while(a%res!=0 || b%res!=0) res--;
    return res;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int g = gcd(a, b);
    printf("%d\n%d", g, a*b/g);

    return 0;
}