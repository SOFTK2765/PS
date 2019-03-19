#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[101][101];
bool visit[101][101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %1d", &a[i][j]);
    queue<pair<int, int>> bfs;
    bfs.push({0, 0});
    visit[0][0] = true;
    int cnt = 0;
    bool flag = false;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first, y = bfs.front().second;
            if(x==m-1 && y==n-1) flag = true;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]==0 || visit[ny][nx]) continue;
                visit[ny][nx] = true;
                bfs.push({nx, ny});
            }
        }
        cnt++;
        if(flag) break;
    }
    printf("%d", cnt+1);

    return 0;
}