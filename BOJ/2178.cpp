#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[101][101];
bool visit[101][101];

int main()
{
    int n, m, cnt = 1;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    queue<pair<int, int>> bfs;
    bfs.push({0, 0});
    visit[0][0] = true;
    bool end = false;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first;
            int y = bfs.front().second;
            bfs.pop();
            if(x == m-1 && y == n-1)
            {
                end = true;
                break;
            }
            for(int i=0;i<4;i++)
            {
                int nx, ny;
                nx = x+dx[i];
                ny = y+dy[i];
                if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]=='0' || visit[ny][nx]==true) continue;
                bfs.push({nx, ny});
                visit[ny][nx] = true;
            }
        }
        if(end) break;
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}