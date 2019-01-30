#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[501][501];
int cnt[501][501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    cnt[0][0] = 1;
    queue<pair<int, int>> bfs;
    bfs.push({0, 0});
    cnt[0][0]++;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first, y = bfs.front().second, tcnt = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]>=a[y][x]) continue;
                bfs.push({nx, ny});
                cnt[ny][nx]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ", cnt[i][j]);
        printf("\n");
    }
    printf("%d", cnt[n-1][m-1]);

    return 0;
}