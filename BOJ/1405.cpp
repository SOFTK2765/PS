#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[5];
int n;
bool visit[30][30];
double sum = 0;

void f(int pos, int x, int y, double np)
{
    if(pos==n)
    {
        sum += np;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int nx = x+dx[i], ny = y+dy[i];
        if(visit[ny][nx]) continue;
        visit[ny][nx] = true;
        f(pos+1, nx, ny, np*a[i]/100);
        visit[ny][nx] = false;
    }
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<4;i++)
        scanf(" %d", &a[i]);
    visit[n][n] = true;
    f(0, n, n, 1);
    printf("%.9lf", sum);

    return 0;
}