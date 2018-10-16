#include <bits/stdc++.h>

using namespace std;

bool a[1001][1001] = {};
bool visit[1001] = {};
int n, m, v;

void dfs(int pos, int cnt)
{
    visit[pos] = true;
    printf("%d ", pos);
    if(cnt==m) return;
    for(int i=1;i<=n;i++)
        if(!visit[i] && a[pos][i]) dfs(i, cnt+1);
}

int main()
{
    scanf("%d %d %d", &n, &m, &v);
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        a[tmp1][tmp2] = true;
        a[tmp2][tmp1] = true;
    }
    dfs(v, 0);
    printf("\n");
    for(int i=0;i<1001;i++)
        visit[i] = false;
    queue<int> bfs;
    bfs.push(v);
    visit[v] = true;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int point = bfs.front();
            printf("%d ", point);
            bfs.pop();
            for(int i=1;i<=n;i++)
                if(!visit[i] && a[point][i])
                {
                    bfs.push(i);
                    visit[i] = true;
                }
        }
    }

    return 0;
}