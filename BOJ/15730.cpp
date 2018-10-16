#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[101][101];
bool check[101][101];

int main()
{
    int n, m, mx = 0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf(" %d", &a[i][j]);
            if(mx<a[i][j]) mx = a[i][j];
        }
    int pos = 0, cnt = 0;
    queue<pair<int, int>> bfs;
    while(pos++<mx-1)
    {
        memset(check, 0, sizeof(check));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                int tcnt = 0;
                bool flag = false;
                if(a[i][j]<=pos && !check[i][j])
                {
                    bfs.push({j, i});
                    check[i][j] = true;
                    tcnt++;
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
                                if(check[ny][nx] || a[ny][nx]>pos) continue;
                                if(nx>=m || ny>=n || nx<0 || ny<0)
                                {
                                    tcnt = 0;
                                    flag = true;
                                    continue;
                                }
                                check[ny][nx] = true;
                                bfs.push({nx, ny});
                                tcnt++;
                            }
                        }
                    }
                }
                if(!flag) cnt += tcnt;
            }
    }
    printf("%d", cnt);

    return 0;
}