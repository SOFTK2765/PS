#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[21][21];

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf(" %s", a[i]);
    queue<pair<pair<int, int>, unsigned int>> bfs;
    bfs.push({{0, 0}, 1<<(a[0][0]-'A')});
    int cnt = 0;
    while(!bfs.empty())
    {
        int size = bfs.size();
        while(size--)
        {
            int x = bfs.front().first.first, y = bfs.front().first.second;
            unsigned int alpha = bfs.front().second;
            bfs.pop();
            for(int i=0;i<4;i++)
            {
                int nx = x+dx[i], ny = y+dy[i];
                unsigned int nalpha = 1<<(a[ny][nx]-'A');
                if(nx<0 || nx>=c || ny<0 || ny>=r || alpha&nalpha) continue;
                bfs.push({{nx, ny}, alpha+nalpha});
            }
        }
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}