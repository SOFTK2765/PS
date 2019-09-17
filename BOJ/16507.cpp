#include <bits/stdc++.h>

using namespace std;

int a[1001][1001], sum[1001][1001];

int main()
{
    int r, c, q;
    scanf("%d %d %d", &r, &c, &q);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf(" %d", &a[i][j]);
    for(int i=1;i<=r;i++)
        for(int j=0;j<=c;j++)
            sum[i][j] = sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i-1][j-1];
    for(int i=0;i<q;i++)
    {
        int r1, c1, r2, c2;
        scanf(" %d %d %d %d", &r1, &c1, &r2, &c2);
        printf("%d\n", (sum[r2][c2]-sum[r2][c1-1]-sum[r1-1][c2]+sum[r1-1][c1-1])/((r2-r1+1)*(c2-c1+1)));
    }

    return 0;
}