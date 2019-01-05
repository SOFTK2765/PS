#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, d1, d2;
    scanf("%d %d %d", &k, &d1, &d2);
    printf("%lf", k*k-(1.0*(d1-d2)/2)*(1.0*(d1-d2)/2));

    return 0;
}