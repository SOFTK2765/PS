#include <bits/stdc++.h>

using namespace std;

bool visit[3001];

int main()
{
    int v, e;
    scanf("%d %d" ,&v, &e);
    vector<int> adj[v+1];
    for(int i=0;i<e;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        adj[tmp1].push_back(tmp2);
        adj[tmp2].push_back(tmp1);
    }
    queue<int> bfs;
    for(int i=1;i<=v;i++)
    {
        if(!adj[i].empty())
        {
            bfs.push(i);
            visit[i] = true;
            break;
        }
    }
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int tmp = bfs.front();
            bfs.pop();
            int tsize = adj[tmp].size();
            for(int i=0;i<tsize;i++)
            {
                if(visit[adj[tmp][i]]) continue;
                bfs.push(adj[tmp][i]);
                visit[adj[tmp][i]] = true;
            }
        }
    }
    for(int i=1;i<=v;i++)
        if(!visit[i])
        {
            printf("NO");
            return 0;
        }
    int ocnt = 0;
    for(int i=1;i<=v;i++)
        if(adj[i].size()&1) ocnt++;
    printf("%s", (ocnt==0 || ocnt==2)?"YES":"NO");

    return 0;
}