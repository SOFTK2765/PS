#include <bits/stdc++.h>

using namespace std;

int d[401][401];
int n, k;

void floyd()
{
    int cnt = 0;
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(d[i][k]==d[k][j] && d[i][k]!=0) d[i][j] = d[i][k];
}

int main()
{
    scanf("%d %d ", &n, &k);
    for(int i=0;i<k;i++)
    {
        int a, b;
        scanf(" %d %d", &a, &b);
        d[a][b] = -1;
        d[b][a] = 1;
    }
    floyd();
    int s;
    scanf(" %d", &s);
    for(int i=0;i<s;i++)
    {
        int tmp1, tmp2;
        scanf(" %d %d", &tmp1, &tmp2);
        printf("%d\n", d[tmp1][tmp2]);
    }

    return 0;
}