#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, m, b;
    while(~scanf("%lf %lf %lf", &n, &b, &m))
    {
        int cnt = 0;
        while(n<m)
        {
            n *= (b/100+1);
            cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}