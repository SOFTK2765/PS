#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, v;
    scanf("%lf %lf", &h, &v);
    double g, s, k;
    k = v+(h*h/v)-(h*sqrt(v*v+h*h));
    g = sqrt(h*h+((v-k)*(v-k)))/2;
    s = (h*v)/(2*sqrt(h*h+((v-k)*(v-k))));
    printf("%.2lf %.2lf", g, s);

    return 0;
}