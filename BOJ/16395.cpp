#include <bits/stdc++.h>

using namespace std;

int a[31][31];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(j==1 || j==n) a[i][j] = 1;
            else a[i][j] = a[i-1][j-1]+a[i-1][j];
    printf("%d", a[n][k]);

    return 0;
}