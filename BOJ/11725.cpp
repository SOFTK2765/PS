#include <bits/stdc++.h>

using namespace std;

int res[100001];
bool visit[100001];

int main()
{
    int n;
    scanf("%d", &n);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    queue<int> bfs;
    bfs.push(1);
    visit[1] = true;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int here = bfs.front();
            bfs.pop();
            int adjsize = adj[here].size();
            for(int i=0;i<adjsize;i++)
            {
                int there = adj[here][i];
                if(visit[there]) continue;
                res[there] = here;
                bfs.push(there);
                visit[there] = true;
            }
        }
    }
    for(int i=2;i<=n;i++)
        printf("%d\n", res[i]);

    return 0;
}