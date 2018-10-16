#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

char a[1001][1001];
bool visit[1001][1001] = {};
int m, n;
bool elec = false;

void f(int x, int y)
{
    visit[y][x] = true;
    if(y==m-1)
    {
        elec = true;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=m || a[ny][nx]=='1' || visit[ny][nx]) continue;
        f(nx, ny);
    }
}

int main()
{
    scanf("%d %d", &m, &n);
    for(int i=0;i<m;i++)
        scanf("%s", a[i]);
    for(int i=0;i<n;i++)
        if(a[0][i]=='0' && !visit[0][i]) f(i, 0);
    printf(elec?"YES":"NO");

    return 0;
}