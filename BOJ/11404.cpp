#include <bits/stdc++.h>

using namespace std;

int d[101][101];
int n, m;

void floyd()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if(d[j][k]>d[j][i]+d[i][k]) d[j][k] = d[j][i]+d[i][k];
}

int main()
{
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j) d[i][j] = 987654321;
    scanf(" %d", &m);
    for(int i=0;i<m;i++)
    {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        if(d[a][b]>c) d[a][b] = c;
    }
    floyd();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            printf("%d ", d[i][j]!=987654321?d[i][j]:0);
        printf("\n");
    }

    return 0;
}