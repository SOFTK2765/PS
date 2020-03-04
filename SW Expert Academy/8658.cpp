#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int mx = 0, mn = 987654321;
        for(int i=0;i<10;i++)
        {
            int tmp;
            scanf(" %d", &tmp);
            int res = 0;
            while(tmp)
            {
                res += (tmp%10);
                tmp /= 10;
            }
            mx = max(mx, res);
            mn = min(mn, res);
        }
        printf("#%d %d %d\n", tc, mx, mn);
    }

    return 0;
}