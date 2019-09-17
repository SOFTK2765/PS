#include <bits/stdc++.h>

using namespace std;

int n, p, pown, mn = 987654321;
int a[17][17];
int dp[1<<17];

void f(unsigned int visit)
{
    int cnt = 0;
    for(int i=0;i<n;i++)
        if((visit>>i)&1) cnt++;
    if(cnt>=p)
    {
        mn = min(mn, dp[visit]);
        return;
    }
    for(int i=0;i<n;i++)
        if((visit>>i)&1)
            for(int j=0;j<n;j++)
                if(!((visit>>j)&1) && dp[visit]+a[i][j]<dp[visit+(1<<j)])
                {
                    dp[visit+(1<<j)] = dp[visit]+a[i][j];
                    f(visit+(1<<j));
                }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    pown = pow(2, n);
    for(int i=0;i<pown;i++)
        dp[i] = 987654321;
    string s;
    cin >> s;
    unsigned int ivisit = 0;
    for(int i=0;i<n;i++)
        ivisit += ((s[i]=='Y'?1:0)<<i);
    scanf(" %d", &p);
    dp[ivisit] = 0;
    f(ivisit);
    printf("%d", mn==987654321?-1:mn);

    return 0;
}