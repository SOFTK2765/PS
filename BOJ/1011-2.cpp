#include <bits/stdc++.h>

using namespace std;

long long dp[65000];

int main()
{
    for(int i=1;i<65000;i++)
        dp[i] = dp[i-1]+2*i;
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int x, y;
        scanf(" %d %d", &x, &y);
        int tmp = y-x, d = 0;
        while(++d)
            if(tmp<=dp[d])
            {
                printf("%d\n", (tmp<=(dp[d]-d))?d*2-1:d*2);
                break;
            }
    }

    return 0;
}