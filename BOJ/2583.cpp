#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool a[101][101];
int s[10000];
int n, m;

int dfs(int x, int y)
{
    int res = 1;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(nx>=m || ny>=n || nx<0 || ny<0 || a[ny][nx]) continue;
        a[ny][nx] = true;
        res += dfs(nx, ny);
    }
    return res;
}

int main()
{
    int k;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<k;i++)
    {
        int x1, x2, y1, y2;
        scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
        for(int j=y1;j<y2;j++)
            for(int k=x1;k<x2;k++)
                a[j][k] = true;
    }
    int pos = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(!a[i][j])
            {
                a[i][j] = true;
                s[pos++] = dfs(j, i);
            }
        }
    sort(s, s+pos);
    printf("%d\n", pos);
    for(int i=0;i<pos;i++)
        printf("%d ", s[i]);

    return 0;
}