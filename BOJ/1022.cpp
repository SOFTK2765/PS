#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int a[10001][10001];

int main()
{
    int ni = 4999, nj = 5000, n = 2;
    a[5000][5000] = 1;
    for(int i=0;i<5001;i++)
    {
        for(int j=0;j<i*2;j++)
        {
            a[ni][nj] = n++;
            ni--;
        }
        ni++;
        nj--;
        for(int j=0;j<i*2;j++)
        {
            a[ni][nj] = n++;
            nj--;
        }
        nj++;
        ni++;
        for(int j=0;j<i*2;j++)
        {
            a[ni][nj] = n++;
            ni++;
        }
        ni--;
        nj++;
        for(int j=0;j<i*2;j++)
        {
            a[ni][nj] = n++;
            nj++;
        }
    }
    int r1, c1, r2, c2;
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
    int mx = 0;
    for(int i=5000+r1;i<=5000+r2;i++)
        for(int j=5000+c1;j<=5000+c2;j++)
            mx = max(mx, a[i][j]);
    int cnt = 0;
    while(mx)
    {
        mx /= 10;
        cnt++;
    }
    for(int i=5000+r1;i<=5000+r2;i++)
    {
        for(int j=5000+c1;j<=5000+c2;j++)
        {
            if(j!=5000+c1)
            {
                int tmp = a[i][j], tcnt = 0;
                while(tmp)
                {
                    tmp /= 10;
                    tcnt++;
                }
                tcnt = cnt-tcnt;
                while(tcnt--) printf(" ");
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}