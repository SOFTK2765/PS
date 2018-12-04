#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[301][301], tcnt[301][301];
bool visit[301][301];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    queue<pair<int, int>> bfs;
    int t = 0;
    while(++t)
    {
        int cnt = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]!=0) cnt++;
        if(cnt==0) break;
        bool flag = false;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                visit[i][j] = false;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(flag && a[i][j] && !visit[i][j])
                {
                    printf("%d", t-1);
                    return 0;
                }
                if(a[i][j]!=0 && !visit[i][j])
                {
                    flag = true;
                    bfs.push({j, i});
                    visit[i][j] = true;
                    while(!bfs.empty())
                    {
                        int size = bfs.size();
                        while(size--)
                        {
                            int x = bfs.front().first, y = bfs.front().second;
                            bfs.pop();
                            for(int k=0;k<4;k++)
                            {
                                int nx = x+dx[k], ny = y+dy[k];
                                if(nx<0 || ny<0 || nx>=m || ny>=n || visit[ny][nx] || a[ny][nx]==0) continue;
                                bfs.push({nx, ny});
                                visit[ny][nx] = true;
                            }
                        }
                    }
                }
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]>0)
                {
                    int ttcnt = 0;
                    for(int k=0;k<4;k++)
                    {
                        int ni = i+dy[k], nj = j+dx[k];
                        if(ni<0 || nj<0 || nj>=m || ni>=n || a[ni][nj]!=0) continue;
                        ttcnt++;
                    }
                    tcnt[i][j] = ttcnt;
                }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                a[i][j] -= tcnt[i][j];
                if(a[i][j]<0) a[i][j] = 0;
            }
    }
    printf("0");

    return 0;
}