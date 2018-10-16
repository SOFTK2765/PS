#include <bits/stdc++.h>

using namespace std;

long long dp[31];
    
int main()
{
    int n;
    scanf("%d", &n);
    dp[0] = 1;
    dp[2] = 3;
    for(int i=4;i<=n;i+=2)
    {
        long long s = 0;
        for(int j=4;j<=i;j+=2)
            s += 2*dp[i-j];
        dp[i] = dp[i-2]*3+s;
    }
    printf("%lld", n%2==0?dp[n]:0);

    return 0;
}