#include <bits/stdc++.h>

using namespace std;

int a[1001][11];

int main()
{
    int n;
    scanf("%d", &n);
    a[0][0] = 1;
    for(int i=1;i<=n;i++)
    {
        a[i][0] = 1;
        for(int j=1;j<10;j++)
            a[i][j] = (a[i-1][j]+a[i][j-1])%10007;
    }
    int sum = 0;
    for(int i=0;i<10;i++)
        sum += a[n][i];
    printf("%d", sum%10007);

    return 0;
}