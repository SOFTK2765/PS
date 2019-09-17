#include <bits/stdc++.h>

using namespace std;

bool visit[501], finish[501];
vector<vector<int>> adj(501);
bool cf;

bool dfs(int pos, int pre)
{
    visit[pos] = true;
    int adjsize = adj[pos].size();
    for(int i=0;i<adjsize;i++)
        if(!visit[adj[pos][i]])  dfs(adj[pos][i], pos);
        else if(adj[pos][i]!=pre && visit[adj[pos][i]] && !finish[adj[pos][i]]) cf = true;
    finish[pos] = true;
}

int main()
{
    int tc = 0;
    while(++tc)
    {
        memset(visit, 0, sizeof(visit));
        memset(finish, 0, sizeof(finish));
        int n, m;
        scanf(" %d %d", &n, &m);
        if(n==0 && m==0) break;
        for(int i=1;i<=n;i++)
            adj[i].clear();
        for(int i=0;i<m;i++)
        {
            int tmp1, tmp2;
            scanf(" %d %d", &tmp1, &tmp2);
            adj[tmp1].push_back(tmp2);
            adj[tmp2].push_back(tmp1);
        }
        int cnt = 0;
        for(int i=1;i<=n;i++)
            if(!visit[i])
            {
                cf = false;
                dfs(i, 0);
                if(!cf) cnt++;
            }
        printf("Case %d: ", tc);
        if(cnt==0) printf("No trees.\n");
        else if(cnt==1) printf("There is one tree.\n");
        else printf("A forest of %d trees.\n", cnt);
    }

    return 0;
}