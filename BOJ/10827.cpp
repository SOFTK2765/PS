#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a;
    int b;
    scanf("%lf %d", &a, &b);
    long double res = 1;
    while(b--)
        res *= a;
    printf("%.13Lf", res);

    return 0;
}