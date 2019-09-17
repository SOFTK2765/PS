#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[501][501];
bool check[501][501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    int mx = 0, cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1 && !check[i][j])
            {
                cnt++;
                queue<pair<int, int>> bfs;
                bfs.push({j, i});
                check[i][j] = true;
                int tmpcnt = 1;
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
                            if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]==0 || check[ny][nx]) continue;
                            check[ny][nx] = true;
                            bfs.push({nx, ny});
                            tmpcnt++;
                        }
                    }
                }
                mx = max(mx, tmpcnt);
            }
        }
    printf("%d\n%d", cnt, mx);

    return 0;
}