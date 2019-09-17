#include <bits/stdc++.h>

using namespace std;

pair<int, int> dp[31];

int main()
{
    int d, k;
    scanf("%d %d", &d, &k);
    dp[1].second = dp[2].first = 0;
    dp[1].first = dp[2].second = 1;
    for(int i=3;i<=d;i++)
    {
        dp[i].first = dp[i-1].first+dp[i-2].first;
        dp[i].second = dp[i-1].second+dp[i-2].second;
    }
    int a = 0;
    while(++a)
        if((k-dp[d].first*a)%dp[d].second==0)
        {
            printf("%d\n%d", a, (k-dp[d].first*a)/dp[d].second);
            break;
        }

    return 0;
}