#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj(123457);
pair<int, int> a[123457];
bool visit[123457];

long long dfs(int pos)
{
    visit[pos] = true;
    int adjsize = adj[pos].size();
    long long res = a[pos].first-a[pos].second;
    for(int i=0;i<adjsize;i++)
        if(!visit[adj[pos][i]]) res += dfs(adj[pos][i]);
    return res<0?0:res;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=2;i<=n;i++)
    {
        char tmp1;
        int tmp2, tmp3;
        scanf(" %c %d %d", &tmp1, &tmp2, &tmp3);
        if(tmp1=='S') a[i].first = tmp2;
        else if(tmp1=='W') a[i].second = tmp2;
        adj[i].push_back(tmp3);
        adj[tmp3].push_back(i);
    }
    printf("%lld", dfs(1));

    return 0;
}