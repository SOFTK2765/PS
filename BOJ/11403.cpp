#include <bits/stdc++.h>

using namespace std;

int d[101][101] = {};
int n;

void floyd()
{
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(d[i][k] && d[k][j]) d[i][j] = 1;
}

int main()
{
    scanf("%d ", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            int a;
            scanf("%d ", &a);
            if(a==1) d[i][j] = 1;
        }
    floyd();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            printf("%d ", d[i][j]);
        printf("\n");
    }

    return 0;
}