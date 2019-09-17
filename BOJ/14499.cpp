#include <bits/stdc++.h>

using namespace std;

int dice[] = {0, 0, 0, 0, 0, 0, 0};

int a[21][21];
int pre[7];

void roll(int d)
{
    for(int i=1;i<=6;i++)
        pre[i] = dice[i];
    if(d==1)
    {
        dice[1] = pre[4];
        dice[2] = pre[2];
        dice[3] = pre[1];
        dice[4] = pre[6];
        dice[5] = pre[5];
        dice[6] = pre[3];
    }
    else if(d==2)
    {
        dice[1] = pre[3];
        dice[2] = pre[2];
        dice[3] = pre[6];
        dice[4] = pre[1];
        dice[5] = pre[5];
        dice[6] = pre[4];
    }
    else if(d==3)
    {
        dice[1] = pre[5];
        dice[2] = pre[1];
        dice[3] = pre[3];
        dice[4] = pre[4];
        dice[5] = pre[6];
        dice[6] = pre[2];
    }
    else if(d==4)
    {
        dice[1] = pre[2];
        dice[2] = pre[6];
        dice[3] = pre[3];
        dice[4] = pre[4];
        dice[5] = pre[1];
        dice[6] = pre[5];
    }
}

int main()
{
    int n, m, x, y, k;
    scanf("%d %d %d %d %d", &n, &m, &y, &x, &k);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    for(int i=0;i<k;i++)
    {
        int d;
        scanf(" %d", &d);
        int nx = x, ny = y;
        if(d==1) nx++;
        else if(d==2) nx--;
        else if(d==3) ny--;
        else if(d==4) ny++;
        if(nx<0 || nx>=m || ny<0 || ny>=n) continue;
        roll(d);
        if(a[ny][nx]==0) a[ny][nx] = dice[6];
        else
        {
            dice[6] = a[ny][nx];
            a[ny][nx] = 0;
        }
        x = nx;
        y = ny;
        printf("%d\n", dice[1]);
    }

    return 0;
}