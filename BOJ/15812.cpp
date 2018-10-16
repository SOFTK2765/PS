#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[21][21];
bool visit[21][21];

int n, m;

int bfs(int x1, int y1, int x2, int y2)
{
    memset(visit, 0, sizeof(visit));
    queue<pair<int, int>> q;
    q.push({x1, y1});
    q.push({x2, y2});
    visit[y1][x1] = true;
    visit[y2][x2] = true;
    int cnt = 0, res = 0;
    while(!q.empty())
    {
        int size = q.size();
        while(size--)
        {
            int x = q.front().first, y = q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || ny<0 || nx>=m || ny>=n || visit[ny][nx]) continue;
                if(a[ny][nx]=='1') res = cnt+1;
                q.push({nx, ny});
                visit[ny][nx] = true;
            }
        }
        cnt++;
    }
    return res;
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    int mn = 98764321;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            for(int k=i;k<n;k++)
                for(int l=j+1;l<m;l++)
                    if(a[i][j]!='1' && a[k][l]!='1') mn = min(bfs(j, i, l, k), mn);
    printf("%d", mn);

    return 0;
}