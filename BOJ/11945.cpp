#include <bits/stdc++.h>

using namespace std;

char a[11][11];

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf(" %c", &a[i][m-1-j]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%c", a[i][j]);
        printf("\n");
    }

    return 0;
}