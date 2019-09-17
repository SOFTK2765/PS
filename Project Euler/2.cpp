#include <bits/stdc++.h>

using namespace std;

int dp[101];

int main()
{
    dp[0] = 1;
    dp[1] = 1;
    int i = 2, sum = 0;
    while(1)
    {
        dp[i] = dp[i-1]+dp[i-2];
        if(dp[i]>4000000) break;
        if(dp[i]%2==0) sum += dp[i];
        i++;
    }
    printf("%d", sum);

    return 0;
}