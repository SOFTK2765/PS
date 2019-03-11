#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    printf("%d\n%d\n%d", d+f+h-g-e-c, f+h-g-e, h-g);

    return 0;
}