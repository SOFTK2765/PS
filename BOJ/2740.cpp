#include <bits/stdc++.h>

using namespace std;

int a[101][101];
int b[101][101];

int main()
{
    int n, m, k;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %d", &a[i][j]);
    scanf("%d %d", &m, &k);
    for(int i=0;i<m;i++)
        for(int j=0;j<k;j++)
            scanf(" %d", &b[i][j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            int sum = 0;
            for(int l=0;l<m;l++)
                sum += (a[i][l]*b[l][j]);
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}