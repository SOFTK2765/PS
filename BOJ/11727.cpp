#include <bits/stdc++.h>

using namespace std;

int dp[1001];

int main()
{
    int n;
    scanf("%d", &n);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3;i<=n;i++)
    {
        if(i%2==1)
        {
            int sum = 0;
            for(int j=0;j<i;j++)
                sum += (dp[j]*dp[i-j-1]%10007);
            dp[i] = sum;            
        }
        else
        {
            dp[i] = dp[i-2]*3;
        }
    }
    printf("%d", dp[n]);

    return 0;
}