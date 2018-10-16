#include <bits/stdc++.h>

using namespace std;

int d[401][401];
int v, e;

void floyd()
{
    for(int k=1;k<=v;k++)
        for(int i=1;i<=v;i++)
            for(int j=1;j<=v;j++)
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
}

int main()
{
    for(int i=0;i<401;i++)
        for(int j=0;j<401;j++)
            d[i][j] = 987654321; 
    scanf("%d %d", &v, &e);
    for(int i=0;i<e;i++)
    {
        int a, b, c;
        scanf("%d %d %d ", &a, &b, &c);
        if(d[a][b]>c) d[a][b] = c;
    }
    floyd();
    int res = 987654321;
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
            res = min(res, d[i][j]+d[j][i]);
    printf("%d", res==987654321?-1:res);

    return 0;
}