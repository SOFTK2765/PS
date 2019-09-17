#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool wvisit[51][51], visit[51][51];

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf(" %s", &a[i]);
    pair<int, int> d;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]=='D')
            {
                d.first = j;
                d.second = i;
            }
    queue<pair<int, int>> bfs1;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]=='*')
            {
                bfs1.push({j, i});
                wvisit[i][j] = true;
            }
    queue<pair<int, int>> bfs2;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]=='S')
            {
                bfs2.push({j, i});
                visit[i][j] = true;
            }
    int cnt = 0;
    while(!bfs2.empty())
    {
        cnt++;
        int size1 = bfs1.size();
        while(size1--)
        {
            int x = bfs1.front().first, y = bfs1.front().second;
            bfs1.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=c || ny<0 || ny>=r || wvisit[ny][nx] || a[ny][nx]=='D' || a[ny][nx]=='X') continue;
                wvisit[ny][nx] = true;
                bfs1.push({nx, ny});
            }
        }
        int size2 = bfs2.size();
        while(size2--)
        {
            int x = bfs2.front().first, y = bfs2.front().second;
            bfs2.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=c || ny<0 || ny>=r || wvisit[ny][nx] || visit[ny][nx] || a[ny][nx]=='X') continue;
                if(nx==d.first && ny==d.second)
                {
                    printf("%d", cnt);
                    return 0;
                }
                visit[ny][nx] = true;
                bfs2.push({nx, ny});
            }
        }
    }
    printf("KAKTUS");

    return 0;
}