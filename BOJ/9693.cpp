#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t = 0;
    while(++t)
    {
        int n;
        scanf(" %d", &n);
        if(n==0) break;
        int cnt2 = 0, tmp2 = 1;
        while(n/tmp2)
        {
            tmp2 *= 2;
            cnt2 += (n/tmp2);
        }
        int cnt5 = 0, tmp5 = 1;
        while(n/tmp5)
        {
            tmp5 *= 5;
            cnt5 += (n/tmp5);
        }
        printf("Case #%d: %d\n", t, cnt2<cnt5?cnt2:cnt5);
    }

    return 0;
}