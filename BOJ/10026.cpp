#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[101][101];
bool check[101][101] = {};
int n;

void f(int x, int y, char tmp)
{
    check[y][x]=true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>n-1 || ny>n-1 || check[ny][nx]==true || a[ny][nx]!=tmp) continue;
        f(nx, ny, tmp);
    }
    return;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    int cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(check[i][j]==false)
            {
                f(j, i, a[i][j]);
                cnt++;
            }
    printf("%d ", cnt);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='G') a[i][j] = 'R';
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            check[i][j] = false;
    cnt = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(check[i][j]==false)
            {
                f(j, i, a[i][j]);
                cnt++;
            }
    printf("%d", cnt);

    return 0;
}