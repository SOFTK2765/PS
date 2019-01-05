#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, k, p;
    scanf("%d %d %d", &c, &k, &p);
    int res = 0;
    for(int i=1;i<=c;i++)
        res += k*i+p*i*i;
    printf("%d", res);

    return 0;
}