#include <bits/stdc++.h>

using namespace std;

int a[501][501];
int res[501][501];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            scanf(" %d", &a[i][j]);
    res[1][1] = a[1][1];
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int mx;
            if(j==1) mx = res[i-1][j];
            else if(j==i) mx = res[i-1][j-1];
            else mx = res[i-1][j-1]>res[i-1][j]?res[i-1][j-1]:res[i-1][j];
            res[i][j] = a[i][j]+mx;
        }
    }
    int mx = 0;
    for(int i=1;i<=n;i++)
        if(mx<res[n][i]) mx = res[n][i];
    printf("%d", mx);

    return 0;
}