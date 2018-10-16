#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool visit[1001][1001] = {};

int main()
{
    queue <pair<int, int>> bfs;
    int n, m, tmp, p=0;
    scanf("%d %d ", &m, &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf("%d", &tmp);
            if(tmp==0) p=1;
            if(tmp==1)
            {
                bfs.push({j, i});
                visit[i][j] = true;
            }
            else if(tmp==-1) visit[i][j] = true;
        }

    int cnt = -1;
    while(!bfs.empty())
    {
        int size = bfs.size();

        while(size--)
        {
            int x = bfs.front().first;
            int y = bfs.front().second;
            bfs.pop();

            for(int i=0;i<4;i++)
            {
                int nx, ny;
                nx = x+dx[i];
                ny = y+dy[i];

                if(nx<0 || ny<0 || nx>=m || ny>=n || visit[ny][nx]==true) continue;

                bfs.push({nx, ny});
                visit[ny][nx]=true;
            }
        }
        cnt++;
    }

    if(p==0) cnt = 0;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(visit[i][j]==false)
            {
                printf("%d", -1);
                return 0;
            }
        }
    printf("%d", cnt);

    return 0;
}