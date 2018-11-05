#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    scanf("%d", &p);
    while(p--)
    {
        int n;
        double d, a, b, f;
        scanf(" %d %lf %lf %lf %lf", &n, &d, &a, &b, &f);
        printf("%d %.2lf\n", n, d/(a+b)*f);
    }

    return 0;
}