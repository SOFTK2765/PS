#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[51][51], check[51][51];
int sum[2501];

int main()
{
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    int rescnt = 0;
    while(1)
    {
        memset(check, -1, sizeof(check));
        int cnt = 0;
        queue<pair<int, int>> bfs;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(check[i][j]==-1)
                {
                    bfs.push({j, i});
                    check[i][j] = cnt;
                    int tmpcnt = 1;
                    sum[cnt] = a[i][j];
                    while(!bfs.empty())
                    {
                        int size = bfs.size();
                        while(size--)
                        {
                            int x = bfs.front().first, y = bfs.front().second;
                            bfs.pop();
                            for(int k=0;k<4;k++)
                            {
                                int nx = x+dx[k], ny = y+dy[k], tmp = abs(a[y][x]-a[ny][nx]);
                                if(nx<0 || nx>=n || ny<0 || ny>=n || check[ny][nx]!=-1 || tmp<l || tmp>r) continue;
                                bfs.push({nx, ny});
                                check[ny][nx] = cnt;
                                tmpcnt++;
                                sum[cnt] += a[ny][nx];
                            }
                        }
                    }
                    sum[cnt] /= tmpcnt;
                    cnt++;
                }
        bool flag = false;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(a[i][j]!=sum[check[i][j]])
                {
                    flag = true;
                    a[i][j] = sum[check[i][j]];
                }
        if(!flag) break;
        rescnt++;
    }
    printf("%d\n", rescnt);

    return 0;
}