#include <bits/stdc++.h>

using namespace std;

int a[21];
int dp[10001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=0;i<n;i++)
            scanf(" %d", &a[i]);
        int m;
        scanf(" %d", &m);
        for(int i=0;i<=m;i++)
            dp[i] = 0;
        for(int i=0;i<n;i++)
        {
            int tmp = 0;
            for(int j=a[i];j<=m;j+=a[i])
                dp[j] = dp[j-a[i]]+1;
        }
        for(int i=0;i<=m;i++)
            printf("%d ", dp[i]);
        printf("\n");
        printf("%d\n", dp[m]);
    }

    return 0;
}