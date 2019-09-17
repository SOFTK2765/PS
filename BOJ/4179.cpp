#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[1001][1001];
bool fvisit[1001][1001], visit[1001][1001];

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf("%s ", &a[i]);
    pair<int, int> js;
    vector<pair<int, int>> f;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j]=='J')
            {
                js.first = j;
                js.second = i;
            }
            else if(a[i][j]=='F') f.push_back({j, i});
    queue<pair<int, int>> bfs1, bfs2;
    int fsize = f.size();
    for(int i=0;i<fsize;i++)
    {
        bfs1.push({f[i].first, f[i].second});
        fvisit[f[i].second][f[i].first] = true;
    }
    bfs2.push({js.first, js.second});
    visit[js.second][js.first] = true;
    int cnt = 0;
    while(!bfs2.empty())
    {
        int size = bfs1.size();
        while(size--)
        {
            int x = bfs1.front().first, y = bfs1.front().second;
            bfs1.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=c || ny<0 || ny>=r || a[ny][nx]=='#' || fvisit[ny][nx]) continue;
                bfs1.push({nx, ny});
                fvisit[ny][nx] = true;
            }
        }
        cnt++;
        size = bfs2.size();
        while(size--)
        {
            int x = bfs2.front().first, y = bfs2.front().second;
            bfs2.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=c || ny<0 || ny>=r)
                {
                    printf("%d", cnt);
                    return 0;
                }
                if(a[ny][nx]=='#' || fvisit[ny][nx] || visit[ny][nx]) continue;
                bfs2.push({nx, ny});
                visit[ny][nx] = true;
            }
        }
    }
    printf("IMPOSSIBLE");

    return 0;
}