#include <bits/stdc++.h>

using namespace std;

int main()
{
    int e, f, c;
    scanf("%d %d %d", &e, &f, &c);
    e += f;
    int sum = 0, tmp = 0;
    tmp = e%c;
    sum += (e /= c);
    while((e+tmp)/c)
    {
        e += tmp;
        tmp = e%c;
        sum += (e /= c);
    }
    printf("%d", sum);

    return 0;
}