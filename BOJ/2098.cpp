#include <bits/stdc++.h>

using namespace std;

int n;
int w[17][17];
int dp[17][131073];
unsigned int ivisit;

int f(int pos, unsigned int visit)
{
    if(dp[pos][visit-ivisit]!=987654321) return dp[pos][visit-ivisit];
    if(visit+1==0)
    {
        if(w[pos][0]!=0) return w[pos][0];
        else return 987654321;
    }
    for(int i=0;i<n;i++)
        if(!((visit>>i)&1) && w[pos][i]!=0) dp[pos][visit-ivisit] = min(dp[pos][visit-ivisit], f(i, visit+(1<<i))+w[pos][i]);
    return dp[pos][visit-ivisit];
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &w[i][j]);
    int p = pow(2, n);
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
            dp[i][j] = 987654321;
    for(int i=0;i<32-n;i++)
    {
        ivisit <<= 1;
        ivisit += 1;
    }
    for(int i=0;i<n;i++)
        ivisit <<= 1;
    printf("%d", f(0, ivisit+1));

    return 0;
}