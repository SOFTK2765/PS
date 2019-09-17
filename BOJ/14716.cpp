#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int dy[] = {-1, -1, -1, 0, 1, 1 ,1 ,0};

int a[251][251];
bool visit[251][251];

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    int cnt = 0;
    queue<pair<int, int>> bfs;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[i][j] && !visit[i][j])
            {
                cnt++;
                visit[i][j] = true;
                bfs.push({j, i});
                while(!bfs.empty())
                {
                    int size = bfs.size();
                    while(size--)
                    {
                        int x = bfs.front().first, y = bfs.front().second;
                        bfs.pop();
                        for(int i=0;i<8;i++)
                        {
                            int nx = x+dx[i], ny = y+dy[i];
                            if(nx<0 || nx>=n || ny<0 || ny>=m || !a[ny][nx] || visit[ny][nx]) continue;
                            visit[ny][nx] = true;
                            bfs.push({nx, ny});
                        }
                    }
                }
            }
    printf("%d", cnt);

    return 0;
}