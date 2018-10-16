#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0, 0, 0};
const int dy[] = {0, 0, 1, -1, 0, 0};
const int dz[] = {0, 0, 0, 0, 1, -1};

bool visit[101][101][101] = {};

int main()
{
    queue <pair<int, pair<int, int>>> bfs;
    int n, m, h, tmp, p=0;
    scanf("%d %d %d ", &m, &n, &h);
    for(int i=0;i<h;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<m;k++)
            {
                scanf("%d", &tmp);
                if(tmp==0) p=1;
                if(tmp==1)
                {
                    bfs.push({k, {j, i}});
                    visit[i][j][k] = true;
                }
                else if(tmp==-1) visit[i][j][k] = true;
            }

    int cnt = -1;
    while(!bfs.empty())
    {
        int size = bfs.size();

        while(size--)
        {
            int x = bfs.front().first;
            int y = bfs.front().second.first;
            int z = bfs.front().second.second;
            bfs.pop();

            for(int i=0;i<6;i++)
            {
                int nx, ny, nz;
                nx = x+dx[i];
                ny = y+dy[i];
                nz = z+dz[i];

                if(nx<0 || ny<0 || nz<0 || nx>=m || ny>=n || nz>=h || visit[nz][ny][nx]==true) continue;

                bfs.push({nx, {ny, nz}});
                visit[nz][ny][nx]=true;
            }
        }
        cnt++;
    }

    if(p==0) cnt = 0;

    for(int i=0;i<h;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<m;k++)
            {
                if(visit[i][j][k]==false)
                {
                    printf("%d", -1);
                    return 0;
                }
            }
    printf("%d", cnt);

    return 0;
}
