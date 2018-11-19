#include <bits/stdc++.h>

using namespace std;

int dp[10], tmp[10];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<=9;i++)
        dp[i] = 1;
    while(--n)
    {
        for(int i=0;i<=9;i++)
            tmp[i] = dp[i];
        for(int i=0;i<=9;i++)
        {
            if(i==0) dp[i] = tmp[1];
            else if(1<=i && i<=8) dp[i] = (tmp[i+1]+tmp[i-1])%1000000000;
            else dp[i] = tmp[8];
        }
    }
    int sum = 0;
    for(int i=1;i<=9;i++)
        (sum += dp[i]) %= 1000000000;
    printf("%d", sum);

    return 0;
}