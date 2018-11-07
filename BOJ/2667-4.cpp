#include <bits/stdc++.h>

using namespace std;

char a[26][26];
bool b[26][26];
int c[626];
int cnt, n;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int f(int y, int x)
{
    int ans = 1;
    b[y][x] = true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=n || a[ny][nx]!='1' || b[ny][nx]) continue;
        ans += f(ny, nx);
    }
    return ans;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s", a[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='1' && !b[i][j]) c[cnt++] = f(i, j);
    sort(c, c+cnt);
    printf("%d\n", cnt);
    for(int i=0;i<cnt;i++)
        printf("%d\n", c[i]);

    return 0;
}