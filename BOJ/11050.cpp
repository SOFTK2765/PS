#include <bits/stdc++.h>

using namespace std;

int a[11][13] = {};

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    a[0][1] = 1;
    for(int i=1;i<n+1;i++)
        for(int j=1;j<i+2;j++)
            a[i][j] = a[i-1][j-1]+a[i-1][j];
    printf("%d", a[n][k+1]);

    return 0;
}