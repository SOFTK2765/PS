#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool check[51][51];

int main()
{
    int l, w;
    scanf("%d %d", &l, &w);
    for(int i=0;i<l;i++)
        for(int j=0;j<w;j++)
            scanf(" %c", &a[i][j]);
    int mx = 0;
    for(int i=0;i<l;i++)
        for(int j=0;j<w;j++)
            if(a[i][j]=='L')
            {
                memset(check, 0, sizeof(check));
                queue<pair<int, int>> bfs;
                check[i][j] = true;
                bfs.push({j, i});
                int cnt = -1;
                while(!bfs.empty())
                {
                    int size = bfs.size();
                    while(size--)
                    {
                        int x = bfs.front().first, y = bfs.front().second;
                        bfs.pop();
                        for(int k=0;k<4;k++)
                        {
                            int nx = x+dx[k], ny = y+dy[k];
                            if(nx<0 || nx>=w || ny<0 || ny>=l || a[ny][nx]!='L' || check[ny][nx]) continue;
                            check[ny][nx] = true;
                            bfs.push({nx, ny});
                        }
                    }
                    mx = max(++cnt, mx);
                }
            }
    printf("%d", mx);

    return 0;
}