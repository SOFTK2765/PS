#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[2001][2001];
bool visit[2001][2001];

int main()
{
    int n, m, r, c, le, ri;
    scanf("%d %d %d %d %d %d", &n, &m, &r, &c, &le, &ri);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    queue<pair<pair<int, int>, pair<int, int>>> bfs;
    bfs.push({{c-1, r-1}, {le, ri}});
    visit[r-1][c-1] = true;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second, nle = bfs.front().second.first, nri = bfs.front().second.second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]=='*') continue;
                if((nle==0 && i==1) || (nri==0 && i==0)) continue;
                if(i==1) bfs.push({{nx, ny},{nle-1, nri}});
                else if(i==0) bfs.push({{nx, ny},{nle, nri-1}});
                else bfs.push({{nx, ny},{nle, nri}});
                visit[ny][nx] = true;
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(visit[i][j]) cnt++;
    printf("%d\n", cnt);

    return 0;
}