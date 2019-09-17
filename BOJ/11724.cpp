#include <bits/stdc++.h>

using namespace std;

bool check[1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> adj(1001);
    for(int i=0;i<m;i++)
    {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = 0;
    queue<int> bfs;
    for(int i=1;i<=n;i++)
    {
        if(!check[i])
        {
            cnt++;
            bfs.push(i);
            check[i] = true;
            while(!bfs.empty())
            {
                int size = bfs.size();
                while(size--)
                {
                    int tmp = bfs.front();
                    bfs.pop();
                    int tmpsize = adj[tmp].size();
                    for(int i=0;i<tmpsize;i++)
                    {
                        if(check[adj[tmp][i]]) continue;
                        bfs.push(adj[tmp][i]);
                        check[adj[tmp][i]] = true;
                    }
                }
            }
        }
    }
    printf("%d", cnt);

    return 0;
}