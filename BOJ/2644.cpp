#include <bits/stdc++.h>

using namespace std;

bool visit[101];

int main()
{
    int n, a, b, m;
    scanf("%d %d %d %d", &n, &a, &b, &m);
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++)
    {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> bfs;
    bfs.push(a);
    visit[a] = true;
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int here = bfs.front();
            bfs.pop();
            if(here==b)
            {
                printf("%d", cnt);
                return 0;
            }
            int adjsize = adj[here].size();
            for(int i=0;i<adjsize;i++)
            {
                int nhere = adj[here][i];
                if(visit[nhere]) continue;
                bfs.push(nhere);
                visit[nhere] = true;
            }
        }
        cnt++;
    }
    printf("%d", -1);

    return 0;
}