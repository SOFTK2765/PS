#include <bits/stdc++.h>

using namespace std;

long long dp[2001], tmp[2001];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc=1;tc<=t;tc++)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        vector<int> adj[2001];
        for(int i=0;i<n;i++)
            dp[i] = 0;
        for(int i=0;i<m;i++)
        {
            int tmp1, tmp2;
            scanf(" %d %d", &tmp1, &tmp2);
            adj[tmp1].push_back(tmp2);
            adj[tmp2].push_back(tmp1);
            dp[tmp1]++;
            dp[tmp2]++;
        }
        int tr = 4;
        long long sum = 0;
        while(tr--)
        {
            for(int i=1;i<=n;i++)
            {
                int size = adj[i].size();
                tmp[i] = 0;
                for(int j=0;j<size;j++)
                    tmp[i] += dp[adj[i][j]];
                sum += tmp[i];
            }
            for(int i=1;i<=n;i++)
                dp[i] = tmp[i];
        }
        printf("#%d %d\n", tc, sum);
    }

    return 0;
}