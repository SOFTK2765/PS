#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[51][51];
bool visit[129][51][51];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf(" %s", a[i]);
    queue<pair<pair<int, int>, unsigned char>> bfs;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[i][j]=='0')
            {
                bfs.push({{j, i}, 0});
                visit[0][i][j] = true;
            }
    int cnt = 0;
    while(!bfs.empty())
    {
        cnt++;
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second;
            unsigned char k = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                if(nx<0 || nx>=m || ny<0 || ny>=n || a[ny][nx]=='#' || (('A'<=a[ny][nx] && a[ny][nx]<='F') && !(k>>(a[ny][nx]-'A')&1))) continue;
                if(a[ny][nx]=='1')
                {
                    printf("%d", cnt);
                    return 0;
                }
                unsigned char nk = k;
                if('a'<=a[ny][nx] && a[ny][nx]<='f' && !((nk>>(a[ny][nx]-'a'))&1)) nk += (1<<(a[ny][nx]-'a'));
                if(visit[nk][ny][nx]) continue;
                bfs.push({{nx, ny}, nk});
                visit[nk][ny][nx] = true;
            }
        }
    }
    printf("-1");

    return 0;
}