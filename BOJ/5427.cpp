#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[1001][1001];
bool visit[1001][1001];

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        memset(visit, 0, sizeof(visit));
        int w, h;
        scanf(" %d %d", &w, &h);
        for(int i=0;i<h;i++)
            scanf(" %s", a[i]);
        queue<pair<int, int>> bfs1, bfs2;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                if(a[i][j]=='*')
                {
                    bfs1.push({j, i});
                    visit[i][j] = true;
                }
                else if(a[i][j]=='@')
                {
                    bfs2.push({j, i});
                    visit[i][j] = true;
                }
        int cnt = 0;
        bool flag = false;
        while(!bfs2.empty())
        {
            cnt++;
            int size = bfs1.size();
            while(size--)
            {
                int x = bfs1.front().first, y = bfs1.front().second;
                bfs1.pop();
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=w || ny<0 || ny>=h || visit[ny][nx] || a[ny][nx]=='#') continue;
                    bfs1.push({nx, ny});
                    visit[ny][nx] = true;
                }
            }
            size = bfs2.size();
            while(size--)
            {
                int x = bfs2.front().first, y = bfs2.front().second;
                bfs2.pop();
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=w || ny<0 || ny>=h)
                    {
                        printf("%d\n", cnt);
                        flag = true;
                        break;
                    }
                    if(visit[ny][nx] || a[ny][nx]=='#') continue;
                    bfs2.push({nx, ny});
                    visit[ny][nx] = true;
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag) printf("IMPOSSIBLE\n");
    }

    return 0;
}