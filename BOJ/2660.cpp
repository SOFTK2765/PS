#include <bits/stdc++.h>

#define INF 9

using namespace std;

int a[51][51];
int res[51];
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
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j) a[i][j] = INF;
    while(1)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        if(tmp1==-1 && tmp2==-1) break;
        a[tmp1][tmp2] = 1;
        a[tmp2][tmp1] = 1;
    }
    floyd();
    int mn = INF, cnt = 0;
    for(int i=1;i<=n;i++)
    {
        int mx = 0;
        for(int j=1;j<=n;j++)
            if(a[i][j]!=INF) mx = max(a[i][j], mx);
        if(mn>mx)
        {
            cnt = 0;
            res[cnt++] = i;
            mn = mx;
        }
        else if(mn==mx) res[cnt++] = i;
    }
    printf("%d %d\n", mn, cnt);
    for(int i=0;i<cnt;i++)
        printf("%d ", res[i]);

    return 0;
}