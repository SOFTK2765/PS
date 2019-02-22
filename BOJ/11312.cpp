#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        printf("%lld\n", 1LL*(tmp1/tmp2)*(tmp1/tmp2));
    }

    return 0;
}