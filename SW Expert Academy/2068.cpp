#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int mx = 0, tmp;
        for(int i=0;i<10;i++)
        {
            scanf(" %d", &tmp);
            mx = max(mx, tmp);
        }
        printf("#%d %d\n", tc, mx);
    }

    return 0;
}