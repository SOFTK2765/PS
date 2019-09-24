#include <bits/stdc++.h>

using namespace std;

int w[10001];
int dp[2][10001];
bool visit[10001];
vector<vector<int>> adj(10001);
vector<int> v;

int f(int pos, bool check)
{
    int cp = check?1:0;
    if(dp[cp][pos]!=-1) return dp[check][pos];
    int adjsize = adj[pos].size();
    dp[cp][pos] = 0;
    if(check) dp[cp][pos] = w[pos];
    for(int i=0;i<adjsize;i++)
    {
        if(!visit[adj[pos][i]])
        {
            visit[adj[pos][i]] = true;
            if(check) dp[cp][pos] += f(adj[pos][i], false);
            else dp[cp][pos] += max(f(adj[pos][i], true), f(adj[pos][i], false));
            visit[adj[pos][i]] = false;
        }
    }
    return dp[cp][pos];
}

void f2(int pos, bool check)
{
    int adjsize = adj[pos].size();
    if(check) v.push_back(pos);
    for(int i=0;i<adjsize;i++)
    {
        if(!visit[adj[pos][i]])
        {
            visit[adj[pos][i]] = true;
            if(check) f2(adj[pos][i], false);
            else
            {
                if(dp[0][adj[pos][i]]>dp[1][adj[pos][i]]) f2(adj[pos][i], false);
                else f2(adj[pos][i], true);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d", &w[i]);
    memset(dp, -1, sizeof(dp));
    for(int i=0;i<n-1;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    visit[1] = true;
    if(f(1, true)>f(1, false))
    {
        printf("%d\n", dp[1][1]);
        f2(1, true);
    }
    else
    {
        printf("%d\n", dp[0][1]);
        f2(1, false);
    }
    sort(v.begin(), v.end());
    int size = v.size();
    for(int i=0;i<size;i++)
        printf("%d ", v[i]);

    return 0;
}