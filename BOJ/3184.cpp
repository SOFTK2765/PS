#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[251][251];
bool visit[251][251];
int r, c, vcnt, ocnt;

void dfs(int x, int y)
{
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || nx>=c || ny<0 || ny>=r || a[ny][nx]=='#' || visit[ny][nx]) continue;
        a[ny][nx]=='v'?vcnt++:a[ny][nx]=='o'?ocnt++:0;
        visit[ny][nx] = true;
        dfs(nx, ny);
    }
}

int main()
{
    scanf("%d %d", &r, &c);
    for(int i=0;i<r;i++)
        scanf(" %s", a[i]);
    int vres = 0, ores = 0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!='#' && !visit[i][j])
            {
                visit[i][j] = true;
                a[i][j]=='v'?vcnt++:a[i][j]=='o'?ocnt++:0;
                dfs(j, i);
            }
            if(vcnt>=ocnt) vres += vcnt;
            else ores += ocnt;
            vcnt = ocnt = 0;
        }
    printf("%d %d", ores, vres);

    return 0;
}