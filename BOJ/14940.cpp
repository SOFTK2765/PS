#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[1001][1001], visit[1001][1001], res[1001][1001];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int si, sj;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==2)
            {
                si = i;
                sj = j;
            }
            else if(a[i][j]==0) visit[i][j] = true;
        }
    queue<pair<int, int>> bfs;
    visit[si][sj] = true;
    bfs.push({sj, si});
    int cnt = 0;
    while(!bfs.empty())
    {
        cnt++;
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first, y = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=m || ny<0 || ny>=n || visit[ny][nx]) continue;
                bfs.push({nx, ny});
                visit[ny][nx] = true;
                res[ny][nx] = cnt;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ", visit[i][j]?res[i][j]:-1);
        printf("\n");
    }

    return 0;
}