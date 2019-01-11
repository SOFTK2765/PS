#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int a[401][401];

int v;

void floyd()
{
    for(int k=1;k<=v;k++)
        for(int i=1;i<=v;i++)
            for(int j=1;j<=v;j++)
                if(a[i][j]>a[i][k]+a[k][j]) a[i][j] = a[i][k]+a[k][j];
}

int main()
{
    int e;
    scanf("%d %d", &v, &e);
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
            a[i][j] = INF;
    for(int i=0;i<e;i++)
    {
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        a[tmp1][tmp2] = tmp3;
    }
    floyd();
    int mn = INF;
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
            if(i==j) mn = min(a[i][j], mn);
    printf("%d", mn==INF?-1:mn);

    return 0;
}