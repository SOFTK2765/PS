#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int m, n, cnt = 0;
int a[101][101];
int tmp[101][101];
bool check[101][101] = {};

int main()
{
    scanf("%d %d", &m, &n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[i][j]);
            if(a[i][j]==1) cnt++;
        }
    queue<pair<int, int>> bfs;
    bfs.push({0, 0});
    check[0][0] = true;
    int save, time = 0;
    while(cnt>0)
    {
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
                    int nx = x+dx[i];
                    int ny = y+dy[i];
                    if(nx<0 || ny<0 || nx>=n || ny>=m || a[ny][nx]==1 || check[ny][nx]) continue;
                    check[ny][nx] = true;
                    bfs.push({nx, ny});
                }
            }
        }
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                tmp[i][j] = a[i][j];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(a[i][j]==1)
                {
                    int rmv = 0;
                    for(int k=0;k<4;k++)
                    {
                        int nx = j+dx[k];
                        int ny = i+dy[k];
                        if(nx<0 || ny<0 || nx>=n || ny>=m || tmp[ny][nx]==1 || !check[ny][nx]) continue;
                        rmv++;
                    }
                    if(rmv>=2)
                    {
                        a[i][j] = 0;
                        cnt--;
                        bfs.push({j, i});
                        check[i][j] = true;
                    }
                }
        time++;
    }
    printf("%d", time);

    return 0;
}