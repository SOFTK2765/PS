#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int a[101][101];
int n;

void floyd()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                if(a[j][k]>a[j][i]+a[i][k]) a[j][k] = a[j][i]+a[i][k];
}

int main()
{
    int m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j] = INF;
    for(int i=0;i<m;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        if(a[tmp1][tmp2]>tmp3) a[tmp1][tmp2] = tmp3;
    }
    floyd();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            if(i!=j) printf("%d ", a[i][j]==INF?0:a[i][j]);
            else printf("0 ");
        printf("\n");
    }

    return 0;
}