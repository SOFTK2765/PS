#include <bits/stdc++.h>

using namespace std;

int a[1001][1001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf(" %d", &a[i][j]);
    int a0 = n==2?1:(a[0][1]+a[0][2]-a[1][2])/2;
    printf("%d ", a0);
    for(int i=1;i<n;i++)
        printf("%d ", a[0][i]-a0);

    return 0;
}