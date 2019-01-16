#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool check[51][51];
pair<int, int> save[251];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    queue<pair<int, int>> bfs;
    check[0][0] = true;
    bfs.push({0, 0});
    int res = 0, cnt = 1;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first, y = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i]*(a[y][x]-'0'), ny = y+dy[i]*(a[y][x]-'0');
                if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]=='H')
                {
                    res = cnt;
                    continue;
                }
                else if(check[ny][nx])
                {
                    for(int j=0;j<cnt;j++)
                        if(save[j].first==nx && save[j].second==ny)
                        {
                            printf("-1");
                            return 0;
                        }
                    continue;
                }
                check[ny][nx] = true;
                save[cnt].first = nx;
                save[cnt].second = ny;
                bfs.push({nx, ny});
            }
        }
        cnt++;
    }
    printf("%d", res);

    return 0;
}