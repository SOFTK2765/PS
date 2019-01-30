#include <bits/stdc++.h>

using namespace std;

int pn[317];
int dp[100001];

int main()
{
    int n;
    scanf("%d", &n);
    int pos = 0;
    for(int i=1;i<=n;i++)
        dp[i] = 987654321;
    for(int i=1;pos<317;i++)
        pn[pos++] = i*i;
    for(int i=1;i<=n;i++)
        for(int j=0;j<pos;j++)
            if(i-pn[j]>=0) dp[i] = min(dp[i], dp[i-pn[j]]+1);
    printf("%d\n", dp[n]);

    return 0;
}