#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj(1000001);
int dp[1000001][2];

int dfs(int pos, int pre, bool s)
{
    if(dp[pos][s]!=-1) return dp[pos][s];
    int adjsize = adj[pos].size(), res = (s?1:0);
    for(int i=0;i<adjsize;i++)
        if(adj[pos][i]!=pre)
        {
            if(s) res += min(dfs(adj[pos][i], pos, false), dfs(adj[pos][i], pos, true));
            else res += dfs(adj[pos][i], pos, true);
        }
    return dp[pos][s] = res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n-1;i++)
    {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(dp, -1, sizeof(dp));
    printf("%d", min(dfs(1, 0, false), dfs(1, 0, true)));

    return 0;
}