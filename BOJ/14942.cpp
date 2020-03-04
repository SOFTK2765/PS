#include <bits/stdc++.h>

using namespace std;

int a[100001];
vector<vector<pair<int, int>>> adj(100001);
int s_table_p[100001][18], s_table_d[100001][18];

void dfs(int pos, int pre, int d)
{
    int adjsize = adj[pos].size();
    for(int i=0;i<adjsize;i++)
        if(adj[pos][i].first!=pre) dfs(adj[pos][i].first, pos, adj[pos][i].second);
    s_table_p[pos][0] = pre;
    s_table_d[pos][0] = d;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf(" %d", &a[i]);
    for(int i=0;i<n-1;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        adj[tmp1].push_back({tmp2, tmp3});
        adj[tmp2].push_back({tmp1, tmp3});
    }
    memset(s_table_p, -1, sizeof(s_table_p));
    dfs(1, -1, 0);
    for(int i=1;i<=17;i++)
        for(int j=1;j<=n;j++)
            if(s_table_p[j][i-1]!=-1)
            {
                s_table_p[j][i] = s_table_p[s_table_p[j][i-1]][i-1];
                if(s_table_p[j][i]!=-1) s_table_d[j][i] = s_table_d[j][i-1]+s_table_d[s_table_p[j][i-1]][i-1];
            }
    for(int i=1;i<=n;i++)
    {
        int here = i;
        bool flag = false;
        while(!flag)
            for(int j=17;j>=0;j--)
            {
                if(s_table_p[here][j]!=-1 && s_table_d[here][j]<=a[i])
                {
                    a[i] -= s_table_d[here][j];
                    here = s_table_p[here][j];
                    break;
                }
                if(j==0) flag = true;
            }
        printf("%d\n", here);
    }

    return 0;
}