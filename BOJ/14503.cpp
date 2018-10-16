#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 1, 0, -1};
const int dy[] = {-1, 0, 1, 0};
int cnt = 0;

bool visit[51][51] = {};
bool wall[51][51] = {};

void f(int r, int c, int d)
{
    if(visit[r][c]==false) cnt++;
    visit[r][c] = true;
    for(int i=3;i>=0;i--)
    {
        int nd = (d+i)%4;
        int nx = c+dx[nd];
        int ny = r+dy[nd];
        if(visit[ny][nx]==false && wall[ny][nx]==false)
        {
            f(ny, nx, nd);

            return;
    	}
    }
     if(wall[r+dy[(d+2)%4]][c+dx[(d+2)%4]]==false) f(r+dy[(d+2)%4], c+dx[(d+2)%4], d);
}

int main()
{
    int n, m, tmp;
    scanf("%d %d", &n, &m);
    int r, c, d;
    scanf("%d %d %d", &r, &c, &d);

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf("%d", &tmp);
            if(tmp==1) wall[i][j] = true;
        }
    f(r, c, d);
    
    printf("%d", cnt);
    return 0;
}
