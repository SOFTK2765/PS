#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool a[51][51];
bool visit[51][51];

int m, n, k;

void f(int x, int y)
{
    visit[y][x]=true;
    int cnt = 0;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]==false || visit[ny][nx]==true) continue;
        cnt++;
    }
    if(cnt==0) return;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]==false || visit[ny][nx]==true) continue;
        f(nx, ny);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        for(int i=0;i<51;i++)
            for(int j=0;j<51;j++)
            {
                a[i][j]=false;
                visit[i][j]=false;
            }
        scanf("%d %d %d", &m, &n, &k);
        for(int i=0;i<k;i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            a[y][x]=true;
        }
        int count = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(visit[i][j]==false && a[i][j]==true)
                {
                    f(j, i);
                    count++;
                }
        printf("%d\n", count);
    }

    return 0;
}