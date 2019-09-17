#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[101][101];
bool visit[101][101], tmpcheck[101][101];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    queue<pair<int, int>> bfs;
    int mn = 987654321;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j] && !visit[i][j])
            {
                memset(tmpcheck, 0, sizeof(tmpcheck));
                queue<pair<int, int>> bfs;
                bfs.push({j, i});
                visit[i][j] = tmpcheck[i][j] = true;
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
                            if(nx<0 || nx>=n || ny<0 || ny>=n || visit[ny][nx] || !a[ny][nx]) continue;
                            bfs.push({nx, ny});
                            visit[ny][nx] = tmpcheck[ny][nx] = true;
                        }
                    }
                }
                for(int k=0;k<n;k++)
                    for(int l=0;l<n;l++)
                        if(tmpcheck[k][l]) bfs.push({l, k});
                int cnt = 0;
                bool flag = false;
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
                            if(nx<0 || nx>=n || ny<0 || ny>=n || tmpcheck[ny][nx]) continue;
                            if(a[ny][nx])
                            {
                                mn = min(mn, cnt);
                                flag = true;
                                break;
                            }
                            bfs.push({nx, ny});
                            tmpcheck[ny][nx] = true;
                        }
                        if(flag) break;
                    }
                    if(flag) break;
                    cnt++;
                }
            }
    printf("%d", mn);

    return 0;
}