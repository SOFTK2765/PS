#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[1001][1001];
int visit[2][1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %1d", &a[i][j]);
    queue<pair<pair<int, int>, bool>> bfs;
    bfs.push({{0, 0}, false});
    visit[0][0][0] = true;
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        cnt++;
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second, ch = bfs.front().second;
            bfs.pop();
            if(x==m-1 && y==n-1)
            {
                printf("%d", cnt);
                return 0;
            }
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                bool nch = a[ny][nx];
                if(nx<0 || nx>=m || ny<0 || ny>=n || (ch && nch) || visit[ch^nch][ny][nx]) continue;
                bfs.push({{nx, ny}, ch^nch});
                visit[ch^nch][ny][nx] = true;
            }
        }
    }
    printf("%d", -1);

    return 0;
}