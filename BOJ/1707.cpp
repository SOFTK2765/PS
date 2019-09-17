#include <bits/stdc++.h>

using namespace std;

int color[20001];
vector<vector<int>> adj(20001);

bool dfs(int here, int nc)
{
    int adjsize = adj[here].size();
    bool flag = false;
    for(int i=0;i<adjsize;i++)
    {
        int there = adj[here][i];
        if(!color[there])
        {
            color[there] = nc;
            if(!dfs(there, -nc)) return false;
        }
        else if(color[there]!=nc) return false;
    }
    return true;
}

int main()
{
    int k;
    scanf("%d", &k);
    while(k--)
    {
        int v, e;
        scanf(" %d %d", &v, &e);
        memset(color, 0, sizeof(color));
        for(int i=0;i<=v;i++)
            adj[i].clear();
        for(int i=0;i<e;i++)
        {
            int tmp1, tmp2;
            scanf(" %d %d", &tmp1, &tmp2);
            adj[tmp1].push_back(tmp2);
            adj[tmp2].push_back(tmp1);
        }
        bool res = true;
        for(int i=1;i<v;i++)
        {
            if(!color[i])
            {
                color[i] = -1;
                if(!dfs(i, 1))
                {
                    res = false;
                    break;
                }
            }
        }
        printf("%s", res?"YES\n":"NO\n");
    }

    return 0;
}