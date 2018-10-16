#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[301][301];
int tmp[301][301];
int n, m;
bool visit[301][301] = {};

void f(int x, int y)
{
    int cnt = 0;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=m || ny>=n || tmp[ny][nx]!=0) continue;
        cnt++;
    }
    a[y][x] -= cnt;
    if(a[y][x]<0) a[y][x] = 0;
}

void check(int x, int y)
{
    visit[y][x] = true;
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=m || ny>=n || a[ny][nx]==0 || visit[ny][nx]) continue;
        check(nx, ny);
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    int year = 0;
    while(++year)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                tmp[i][j] = a[i][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]!=0)
                    f(j, i);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                visit[i][j] = false;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]!=0)
                {
                    check(j, i);
                    goto end1;
                }
        end1:
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(a[i][j]!=0 && !visit[i][j]) goto end2;
        int cnt = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!=0) goto end3;
                if(i==n-1 && j==m-1)
                {
                    year = 0;
                    goto end2;
                }
            }
        end3:
        continue;
    }
    end2:
    printf("%d", year);

    return 0;
}