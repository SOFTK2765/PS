#include <bits/stdc++.h>

using namespace std;

char a[501][501][6];
int wcnt[501][501];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%s", a[i][j]);
    int sum = 0, max = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int l = strlen(a[i][j]);
            int ncnt = 0;
            for(int k=0;k<l;k++)
                if(a[i][j][k]=='9')
                {
                    ncnt++;
                    sum++;
                }
            wcnt[i][j] = ncnt;
        }
    }
    for(int i=0;i<n;i++)
    {
        int nsum = 0;
        for(int j=0;j<m;j++)
            nsum += wcnt[i][j];
        if(max<nsum) max = nsum;
    }
    for(int i=0;i<m;i++)
    {
        int nsum = 0;
        for(int j=0;j<n;j++)
            nsum += wcnt[j][i];
        if(max<nsum) max = nsum;
    }
    printf("%d", sum-max);

    return 0;
}