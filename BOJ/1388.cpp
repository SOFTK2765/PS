#include <bits/stdc++.h>

using namespace std;

const int d[] = {1, -1};

char a[101][101];
bool check[101][101];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%s ", a[i]);
    queue<pair<int, int>> bfs;
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(!check[i][j])
            {
                cnt++;
                check[i][j] = true;
                bfs.push({j, i});
                while(!bfs.empty())
                {
                    int size = bfs.size();
                    while(size--)
                    {
                        int x = bfs.front().first, y = bfs.front().second;
                        bfs.pop();
                        for(int k=0;k<2;k++)
                        {
                            int nx = j, ny = i;
                            if(a[i][j]=='-') nx = x+d[k];
                            else ny = y+d[k];
                            if(nx<0 || ny<0 || nx>=m || ny>=n || check[ny][nx] || a[ny][nx]!=a[i][j]) continue;
                            bfs.push({nx, ny});
                            check[ny][nx] = true;
                        }
                    }
                }
            }
        }
    printf("%d", cnt);

    return 0;
}