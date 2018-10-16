#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

char a[26][26];
bool visit[26][26] = {};
int n;
int s[600];

int f(int x, int y)
{
    int res = 1;
    visit[y][x] = true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=n || a[ny][nx]=='0' || visit[ny][nx]==true) continue;
        res += f(nx, ny);
    }
    return res;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s", &a[i]);
    int cnt = 0, pos = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]=='1' && visit[i][j]==false)
            {
                s[pos++] = f(j, i);
                cnt++;
            }
    sort(s, s+pos);
    printf("%d\n", pos);
    for(int i=0;i<pos;i++)
        printf("%d\n", s[i]);

    return 0;
}