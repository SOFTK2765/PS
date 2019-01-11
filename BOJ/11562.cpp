#include <bits/stdc++.h>

#define INF 987654321

using namespace std;

int a[251][251];
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
        int tmp1, tmp2, tmp3;
        scanf(" %d %d %d", &tmp1, &tmp2, &tmp3);
        if(tmp3==0)
        {
            a[tmp1][tmp2] = 0;
            a[tmp2][tmp1] = 1;
        }
        else
        {
            a[tmp1][tmp2] = 0;
            a[tmp2][tmp1] = 0;
        }
    }
    floyd();
    int k;
    scanf(" %d", &k);
    for(int i=0;i<k;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        printf("%d\n", a[tmp1][tmp2]);
    }

    return 0;
}