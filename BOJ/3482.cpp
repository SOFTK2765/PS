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
        int c, r;
        scanf(" %d %d", &c, &r);
        for(int i=0;i<r;i++)
            scanf(" %s", a[i]);
        memset(visit, 0, sizeof(visit));
        int sx, sy;
        bool flag = false;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                if(a[i][j]=='.')
                {
                    sx = j;
                    sy = i;
                    flag = true;
                    break;
                }
            if(flag) break;
        }
        queue<pair<int, int>> bfs;
        bfs.push({sx, sy});
        visit[sy][sx] = true;
        int lx, ly;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int x = bfs.front().first, y = bfs.front().second;
                bfs.pop();
                lx = x;
                ly = y;
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=c || ny<0 || ny>=r || visit[ny][nx] || a[ny][nx]=='#') continue;
                    bfs.push({nx, ny});
                    visit[ny][nx] = true;
                }
            }
        }
        memset(visit, 0, sizeof(visit));
        bfs.push({lx, ly});
        visit[ly][lx] = true;
        int cnt = -1;
        while(!bfs.empty())
        {
            int size = bfs.size();
            while(size--)
            {
                int x = bfs.front().first, y = bfs.front().second;
                bfs.pop();
                for(int i=0;i<4;i++)
                {
                    int nx = x+dx[i], ny = y+dy[i];
                    if(nx<0 || nx>=c || ny<0 || ny>=r || visit[ny][nx] || a[ny][nx]=='#') continue;
                    bfs.push({nx, ny});
                    visit[ny][nx] = true;
                }
            }
            cnt++;
        }
        printf("Maximum rope length is %d.\n", cnt);
    }

    return 0;
}