#include <bits/stdc++.h>

using namespace std;

int a[21][21];
bool check[21][21];
int b[21][21];
int sum[6];

int main()
{
    int n, tsum = 0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            scanf(" %d", &a[i][j]);
            tsum += a[i][j];
        }
    int mn = 987654321;
    for(int x=1;x<=n;x++)
        for(int y=1;y<=n;y++)
            for(int d1=1;1<=y-d1;d1++)
                for(int d2=1;y+d2<=n && x+d1+d2<=n;d2++)
                {
                    for(int i=1;i<=5;i++)
                        sum[i] = 0;
                    for(int i=1;i<x+d1;i++)
                        for(int j=1;j<=y-(i<x?0:i-x+1);j++)
                            sum[1] += a[i][j];
                    for(int i=1;i<=x+d2;i++)
                        for(int j=y+1+(i<x?0:i-x);j<=n;j++)
                            sum[2] += a[i][j];
                    for(int i=x+d1;i<=n;i++)
                        for(int j=1;j<=(i<x+d1+d2?i-x-d1+y-d1-1:y-d1+d2-1);j++)
                            sum[3] += a[i][j];
                    for(int i=x+d2+1;i<=n;i++)
                        for(int j=y+d2-(i<=x+d1+d2?i-x-d2-1:d1);j<=n;j++)
                            sum[4] += a[i][j];
                    sum[5] = tsum-sum[1]-sum[2]-sum[3]-sum[4];
                    sort(sum+1, sum+6);
                    mn = min(mn, sum[5]-sum[1]);
                }
    printf("%d", mn);

    return 0;
}