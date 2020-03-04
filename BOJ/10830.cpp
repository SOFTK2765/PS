#include <bits/stdc++.h>

using namespace std;

int a[6][6], res[6][6], tmp[6][6];

int main()
{
    int n;
    long long b;
    scanf("%d %lld", &n, &b);
    for(int i=0;i<n;i++)
        res[i][i] = 1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    while(b)
    {
        if(b%2)
        {
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    tmp[i][j] = res[i][j];
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                {
                    int tmpres = 0;
                    for(int k=0;k<n;k++)
                        tmpres += tmp[i][k]*a[k][j];
                    res[i][j] = tmpres%1000;
                }
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                tmp[i][j] = a[i][j];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int tmpa = 0;
                for(int k=0;k<n;k++)
                    tmpa += tmp[i][k]*tmp[k][j];
                a[i][j] = tmpa%1000;
            }
        b>>=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }

    return 0;
}