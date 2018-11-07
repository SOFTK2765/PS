#include <bits/stdc++.h>

using namespace std;

int n, num; 
bool visit[26][26];
int a[26][26];
int tmp[600];

const int dx[4] = {1,-1,0,0};
const int dy[4] = {0,0,1,-1};

void DFS(int x, int y)
{
    visit[y][x] = true;
    for(int i=0;i<4;i++)
    {       
        int nx = x+dx[i], ny = y+dy[i];
        if(nx>=0 && nx<n && ny>=0 && ny<n && a[ny][nx] == 1 && !visit[ny][nx]) DFS(nx, ny);
    }
    tmp[num-1]++;
}

int main()
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%1d", &a[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]==1 && !visit[i][j] && ++num) DFS(j,i);
    printf("%d\n", num);
    sort(tmp, tmp+num);
    for(int i=0;i<num;i++)
        printf("%d\n",tmp[i]);

    return 0;
}