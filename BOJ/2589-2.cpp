#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool visit[51][51];

int main()
{
    int l, w;
    scanf("%d %d", &l, &w);
    for(int i=0;i<l;i++)
        scanf("%s ", a[i]);
    int mx = 0;
    for(int i=0;i<l;i++)
        for(int j=0;j<w;j++)
            if(a[i][j]=='L')
            {
                memset(visit, 0, sizeof(visit));
                queue<pair<int, int>> bfs;
                bfs.push({j, i});
                visit[i][j] = true;
                int cnt = -1;
                while(!bfs.empty())
                {
                    int size = bfs.size();
                    while(size--)
                    {
                        int x = bfs.front().first, y = bfs.front().second;
                        bfs.pop();
                        for(int i=0;i<4;i++)
                        {
                            int nx = x+dx[i], ny = y+dy[i];
                            if(nx<0 || nx>=w || ny<0 || ny>=l || a[ny][nx]=='W' || visit[ny][nx]) continue;
                            bfs.push({nx, ny});
                            visit[ny][nx] = true;
                        }
                    }
                    cnt++;
                }
                mx = max(mx, cnt);
            }
    printf("%d", mx);

    return 0;
}