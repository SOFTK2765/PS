#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        double a, b;
        scanf(" %lf %lf", &a, &b);
        if(a==0 && b==0) break;
        printf("%.3lf\n", sqrt((1+b/a)*(1-b/a)));
    }

    return 0;
}