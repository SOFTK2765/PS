#include <bits/stdc++.h>

using namespace std;

int cnt[1001];
bool check[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int p, pre;
        scanf(" %d %d", &p, &pre);
        for(int j=1;j<p;j++)
        {
            int tmp;
            scanf(" %d", &tmp);
            if(!check[pre][tmp])
            {
                check[pre][tmp] = true;
                adj[pre].push_back(tmp);
                cnt[tmp]++;
            }
            pre = tmp;
        }
    }
    queue<int> tsort;
    for(int i=1;i<=n;i++)
        if(cnt[i]==0) tsort.push(i);
    vector<int> res;
    while(!tsort.empty())
    {
        int size = tsort.size();
        while(size--)
        {
            int x = tsort.front(), adjsize = adj[x].size();
            res.push_back(x);
            tsort.pop();
            for(int i=0;i<adjsize;i++)
                if(--cnt[adj[x][i]]==0) tsort.push(adj[x][i]);
        }
    }
    if(res.size()!=n) printf("0");
    else for(int i=0;i<n;i++) printf("%d\n", res[i]);

    return 0;
}