#include <bits/stdc++.h>

using namespace std;

int res[31][31];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<=30;i++)
        for(int j=0;j<=i;j++)
            if(j==0 || j==i) res[i][j] = 1;
            else res[i][j] = res[i-1][j-1]+res[i-1][j];
    for(int i=0;i<t;i++)
    {
        int n, m;
        scanf(" %d %d", &n, &m);
        printf("%d\n", res[m][n]);
    }

    return 0;
}