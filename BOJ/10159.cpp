#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int a[101][101];
int n;

void floyd()
{
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(a[i][j]>a[i][k]+a[k][j]) a[i][j] = a[i][k]+a[k][j];
}

int main()
{
    int m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j) a[i][j] = INF;
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        a[tmp1][tmp2] = 1;
    }
    floyd();
    for(int i=1;i<=n;i++)
    {
        int cnt = 0;
        for(int j=1;j<=n;j++)
            if(i!=j && a[i][j]==INF && a[j][i]==INF) cnt++;
        printf("%d\n", cnt);
    }

    return 0;
}