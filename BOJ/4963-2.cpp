#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
const int dy[] = {-1, -1, -1, 0, 1, 1, 1, 0};

int a[51][51];
bool visit[51][51];
int w, h;

void dfs(int x, int y)
{
    visit[y][x] = true;
    for(int i=0;i<8;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || nx>=w || ny<0 || ny>=h || a[ny][nx]==0 || visit[ny][nx]) continue;
        dfs(nx, ny);
    }
}

int main()
{
    while(1)
    {
        scanf(" %d %d", &w, &h);
        if(w==0 && h==0) break;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                scanf(" %d", &a[i][j]);
        memset(visit, 0, sizeof(visit));
        int cnt = 0;
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++)
                if(a[i][j]==1 && !visit[i][j])
                {
                    dfs(j, i);
                    cnt++;
                }
        printf("%d\n", cnt);
    }

    return 0;
}