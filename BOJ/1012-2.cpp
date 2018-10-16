#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool a[51][51];
bool visit[51][51];

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int cnt = 0;
        for(int i=0;i<51;i++)
            for(int j=0;j<51;j++)
            {
                a[i][j] = false;
                visit[i][j] =false;
            }
        int m, n, k;
        scanf(" %d %d %d", &m, &n, &k);
        for(int i=0;i<k;i++)
        {
            int x, y;
            scanf(" %d %d", &x, &y);
            a[y][x] = true;
        }
        queue<pair<int, int>> bfs;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]==true && visit[i][j]==false)
                {
                    bfs.push({j, i});
                    visit[i][j] = true;
                    while(!bfs.empty())
                    {
                        int size = bfs.size();
                        while(size--)
                        {
                            int x = bfs.front().first;
                            int y = bfs.front().second;
                            bfs.pop();
                            for(int k=0;k<4;k++)
                            {
                                int nx = x+dx[k];
                                int ny = y+dy[k];
                                if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]==false || visit[ny][nx]==true) continue;
                                bfs.push({nx, ny});
                                visit[ny][nx] = true;
                            }
                        }
                    }
                    cnt++;
                }
        printf("%d\n", cnt);
    }

    return 0;
}