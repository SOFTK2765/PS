#include <bits/stdc++.h>

using namespace std;

int main()
{
    double t, tmp;
    scanf(" %lf", &t);
    tmp = t;
    while(1)
    {
        scanf(" %lf", &t);
        if(t==999) break;
        printf("%.2lf\n", t-tmp);
        tmp = t;
    }

    return 0;
}