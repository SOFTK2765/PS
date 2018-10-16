#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[101][101];
bool visit[101][101];
int n, m, res = 987654321;

void f(int x, int y, int cnt)
{
	if(x==m-1 && y==n-1 && res>cnt) res = cnt;
    visit[y][x] = true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]=='0' || visit[ny][nx]==true) continue;
        f(nx, ny, cnt+1);
    }
    visit[y][x] = false;
    return;
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    f(0, 0, 1);
    printf("%d", res);

    return 0;
}