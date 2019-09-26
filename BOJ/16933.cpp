#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[1001][1001];
bool visit[2][11][1001][1001];

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++)
        scanf(" %s", &a[i]);
    queue<pair<pair<int, int>, int>> bfs;
    bfs.push({{0, 0}, k});
    visit[1][k][0][0] = true;
    int cnt = 0;
    while(!bfs.empty())
    {
        cnt++;
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second, tmpk = bfs.front().second;
            bfs.pop();
            if(x==m-1 && y==n-1)
            {
                printf("%d", cnt);
                return 0;
            }
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=m || ny<0 || ny>=n || visit[tmpk%2][tmpk][ny][nx]) continue;
                if(a[ny][nx]=='1' && tmpk<=0) continue;
                if(a[ny][nx]=='1' && cnt%2==0)
                {
                    bfs.push({{x, y}, tmpk});
                    continue;
                }
                visit[tmpk%2][tmpk][ny][nx] = true;
                bfs.push({{nx, ny}, tmpk-(a[ny][nx]=='1'?1:0)});
            }
        }
    }
    printf("-1");

    return 0;
}