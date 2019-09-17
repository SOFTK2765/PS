#include <bits/stdc++.h>

using namespace std;

int a[10001], dp[10001];
vector<vector<int>> adj(10001);

int dfs(int pos, int pre, bool s)
{
    int adjsize = adj[pos].size(), res = 0;
    for(int i=0;i<adjsize;i++)
        if(adj[pos][i]!=pre)
        {
            if(s) res += dfs(adj[pos][i], pos, false);
            else res += max(dfs(adj[pos][i], pos, false), dfs(adj[pos][i], pos, true));
        }
    return res+(s?a[pos]:0);
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n-1;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    printf("%d", max(dfs(1, 0, false), dfs(1, 0, true)));

    return 0;
}